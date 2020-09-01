double funcos(double e, double x) {
    double sum = 1, elem = 1, fact = 2.0;
    int i = 1;
    while (elem >= e) {
        elem = pow(x, (double)i * 2) / fact;
        if (i % 2 == 0)  sum += elem;
        else sum += -elem;
        fact *= i * 2 + 1;
        i++;
        fact *= i * 2;
    }
    return sum;
}
//https://pintia.cn/problem-sets/12/problems/307
