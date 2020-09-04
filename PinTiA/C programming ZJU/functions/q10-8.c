void printdigits( int n ){
    if(n>9) printdigits(n/10);
    printf("%d\n",n%10);
}
//https://pintia.cn/problem-sets/12/problems/358
//函数printdigits应将n的每一位数字从高位到低位顺序打印出来，每位数字占一行。
