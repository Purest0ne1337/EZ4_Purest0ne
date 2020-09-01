int CountDigit(int number, int digit) {
    if (number == 0 && digit == 0) return 1;
    int count = 0;
    if (number < 0) number = -number;
    while (number) {
        if (number % 10 == digit) count++;
        number /= 10;
    }
    return count;
}
//https://pintia.cn/problem-sets/12/problems/305
