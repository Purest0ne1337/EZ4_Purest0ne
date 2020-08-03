#include <iostream>
#include <cmath>
using namespace std;

class Clock {
public:
    Clock(int newH, int newM, int newS);
    //委托构造函数:
    Clock() :Clock(0, 0, 0) {};
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();
private:
    int hour, minute, second;
};



//构造函数的格式    类名::函数名(): 成员变量(形参){函数体}
Clock::Clock(int newH,int newM,int newS):hour(newH),minute(newM),second(newS){}

void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

//类的组合
//类名::函数名（对象所需形参，本类成员形参）

class Point {
public:
    Point(int xx = 0, int yy = 0) {
        x = xx; y = yy;
    }
    Point(Point& p);
    int getX() { return x; }
    int getY() { return y; }
private:
    int x, y;
};

Point::Point(Point& p) {
    x = p.x;
    y = p.y;
    cout << "复制构造调用一次。" << endl;
}

class Line {
public:
    Line(Point xp1, Point xp2);
    Line(Line& l);
    double getLen() { return len; }
private:
    Point p1, p2;
    double len;
};

Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2) {
    cout << "构造调用一次。" << endl;
    double x = static_cast<double>(p1.getX() - p2.getX());
    double y = static_cast<double>(p1.getY() - p2.getY());
    len = sqrt(x * x + y * y);
}

Line::Line(Line& l) :p1(l.p1), p2(l.p2),len(l.len){ 
    cout << "复制构造调用一次。" << endl;
}

int main() {

    Point myp1, myp2(3, 4); //建立Point类的对象
    Line line(myp1, myp2); //建立Line类的对象
    Line line2(line); //利用复制构造函数建立一个新对象
    cout << "The length of the line is:"
        << line.getLen() << '\n'
        << "The length of the line2 is:"
        << line2.getLen() << endl;
    return 0;
}