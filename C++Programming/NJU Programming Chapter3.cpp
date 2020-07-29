#include <iostream>

//3.8.8
double cal_PI() {
    int i = 1;
    double f = 1,ret=0;
    while (f >= 1e-8) {
        (i % 4 == 1) ? ret += f : ret -= f;
        i += 2;
        f = 1.0 / i;
    };
    return 4 * ret;
}

//3.8.9
bool isNarc(int i) {
    int newnum = 0, oldnum = i, ret = 0;
    while (i != 0) {
        int right_num = i % 10;
        newnum += (right_num)* (right_num)* (right_num);
        i /= 10;
    }
    if (newnum == oldnum) ret = 1;
    return ret;
}

void narcNum() {
    for (int i = 111; i <= 999; i++) {
        if (isNarc(i)) std::cout << i <<'\t';
    }
    std :: cout << std::endl;
}

//3.8.10
int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

//3.8.10
void payment(int price) {
    int imax = price,jmax=price/2,kmax=price/5;
    for (int i = 0; i <= imax; i++) {
        for (int j = 0; j <= jmax; j++) {
            for (int k = 0; k <= kmax; k++) {
                if (i + 2*j + 5*k == price) std::cout << i <<'\t' <<j<<'\t'<< k<<'\t' << std::endl;
            }
        }
    }

}

//3.8.12
bool isPalin() {
    int i = 0, ret = 0;
    std::cin >> i;
    int rightnum=0, oldnum = i, newnum = 0;
    while (i > 0) {
        newnum *= 10;
        rightnum = i % 10;
        newnum += rightnum;
        i /= 10;
    }
    if (newnum == oldnum) ret = 1;
    return ret;
}

int main()
{
  std :: cout << isPalin() ;
}

