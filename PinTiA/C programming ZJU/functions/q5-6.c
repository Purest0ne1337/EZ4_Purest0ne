int power(int num1, int num2)
{
    int result = 1;
    for (int i = 0; i < num2; i++)
        result *= num1;	
    return result;
}

int narcissistic(int number) {
    int number_rec = number;
    int digit = 0;
    int sum = 0;
    int list[6] = { -1,-1,-1,-1,-1,-1};
    for (int i = 0; i < 7 && number != 0; i++) {
        list[i] = number % 10;
        number /= 10;
        digit++;
    }
    for (int i = 0; list[i] != -1; i++) {
        sum += power(list[i], digit);
    }
    if (sum == number_rec) return 1;
    else return 0;
}
void PrintN(int m, int n) {
    for (m += 1; m < n; m++) {
        if (narcissistic(m)) printf("%d\n", m);
    }   
}
//https://pintia.cn/problem-sets/12/problems/306
