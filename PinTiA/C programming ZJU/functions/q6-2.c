int fn(int a, int n) {
    int ret = a;
    for (; n > 1; n--) {
        ret *= 10;
        ret += a;
    }
    return ret;
}

int SumA(int a, int n) {
    int sum = 0;
    for (; n > 0; n--) {
        sum += fn(a,n);
    }
    return sum;
}
//https://pintia.cn/problem-sets/12/problems/309
