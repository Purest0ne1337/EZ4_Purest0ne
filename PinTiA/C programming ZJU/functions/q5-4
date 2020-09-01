int prime(int p) {
    int isPrime = 1;
    if (p < 2) return 0;
    for (int i = 2; i <=sqrt(p); i++) {
        if (p % i == 0) isPrime = 0;
    }
    return isPrime;
}
int PrimeSum(int m, int n) {
    int sum = 0;
    for (; m <= n; m++) {
        if (prime(m)) sum += m;
    }
    return sum;
}
//https://pintia.cn/problem-sets/12/problems/304
