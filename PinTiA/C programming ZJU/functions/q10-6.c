int f( int n ){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return f(n-2)+f(n-1);
}
//递归的fibonacci(),比迭代计算开销大，可进一步优化
