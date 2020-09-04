double calc_pow( double x, int n ){
    return n==1?x:x*calc_pow(x,n-1);
}
//pow()
