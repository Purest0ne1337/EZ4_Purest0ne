int fib(int n) {
    int prev = 1,current = 1;
    for (int i = 3; i <= n; i++) {
        int temp = current;
        current += prev;
        prev = temp;
    }
    return current;
}

void PrintFN(int m, int n) {
    int has_fib = 0;
    int i = 1;
    int fib_now = 1;
    while (fib_now <= n) {
        if (m <= fib_now) {
            if (has_fib == 0)printf("%d", fib_now);
            else printf(" %d", fib_now);
            has_fib += 1;
        }
        fib_now = fib(++i);
    }
    if(!has_fib) printf("No Fibonacci number");
}
//https://pintia.cn/problem-sets/12/problems/311
