int prime(int p) {
    int isPrime = 0;
    if (p >= 2) {
        isPrime = 1;
        for (int i = 2; i <= sqrt(p); i++) {
            if (p % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    return isPrime;
}


void Goldbach(int n) {
    int p=1,q=0;
    while (!prime(q)) {
        p += 2;
        if(prime(p)) q = n - p;
    }
    printf("%d=%d+%d", n, p, q);
}
//https://pintia.cn/problem-sets/12/problems/312
