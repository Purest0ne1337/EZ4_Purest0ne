#include <iostream>

using namespace std;

//4.8.7
int digit(int n, int k) {
    for (int i = 1; i < k; i++) {
        n /= 10;
    }
    return n % 10;
}

//4.8.10 (1
double func_H(double x, int n) {
    double ret = 1;
    if (n == 1) ret = 2 * x;
    else if (n > 1) ret = 2 * x * func_H(x, n - 1) - 2 * (n - 1) * func_H(x, n - 2);
    return ret;
}
//4.8.10 (2
double func_H2(double x, int n) {
    double ret = 1;
    if (n == 1) ret = 2 * x;
    else if (n > 1) {
        double first = 1, second = 2 * x;
        for (int i = 2; i <= n; i++) {
            ret = 2.0 * x * second - 2.0 * (i - 1) * first;
            first = second;
            second = ret;
        }
    }
    return ret;
}
//3.8.11
double ack(double m, double n) {
    if (m == 0) return n + 1;
    else if (n == 0) return ack(m - 1, 1);
    else return ack(m - 1, ack(m, n - 1));
}

//3.8.12
int path(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;
    if (n == 4) return 4;
    else if (n % 2 == 0)
        return path(n - 1) + path(n - 2) + path(n - 3);
    else if (n % 2 == 1)
        return path(n - 1) + path(n - 2);
}

//3.8.13
int cow_pop(int n) {
    if (n <= 3) return 1;
    else return cow_pop(n - 3) + cow_pop(n - 1);
}

int main()
{
    cout << cow_pop(6) << endl;
}
