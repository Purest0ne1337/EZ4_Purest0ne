void dectobin( int n ){
    if(n/2) dectobin(n/2);
    printf("%d",n%2);
}
//https://pintia.cn/problem-sets/12/problems/357
