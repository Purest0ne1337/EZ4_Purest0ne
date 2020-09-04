double power( double x, int n ){
    return n==1?x:x*power(x,n-1);
}

double fn( double x, int n ){
    if(n==1) return x;
    else if(n%2==0) return fn(x,n-1)-power(x,n);
    else return fn(x,n-1)+power(x,n);
} 
//https://pintia.cn/problem-sets/12/problems/354
