int sum( int n ){
    if(n<=0) return 0;
    else return n+sum(n-1);
}
//递归n个正整数求和
