int factorsum(int number) {
    int sum = 1;
    for (int i = 2; i < (number/2+1); i++) {
        if (number % i == 0) sum += i;
    }
    return sum;
}

void PrintPN(int m, int n) {
    int perfect = 0;
    for (; m <= n; m++) {
        if (factorsum(m) == m) {
            perfect = 1;
            printf("%d = 1", m);
            for (int i = 2; i < (m / 2 + 1); i++) {
                if (m % i == 0) printf(" + %d", i); 
            }
            printf("\n");
        }
    }
    if (perfect == 0) printf("No perfect number");
}
//https://pintia.cn/problem-sets/12/problems/310
