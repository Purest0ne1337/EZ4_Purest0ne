double fact( int n ){
    if(n==0) return 1;
    else return n*fact(n-1);
}
double factsum( int n ){
    double sum=0;
    for(int i = 1;i<=n;i++){
        sum+=fact(i);
    }
    return sum;
}
//https://pintia.cn/problem-sets/12/problems/352
