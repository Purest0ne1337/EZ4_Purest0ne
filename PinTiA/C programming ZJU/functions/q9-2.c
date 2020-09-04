struct complex multiply(struct complex x, struct complex y){
    struct complex ret;
    ret.real = x.real*y.real-x.imag*y.imag;
    ret.imag = x.real*y.imag+x.imag*y.real;
    return ret;
}
//https://pintia.cn/problem-sets/12/problems/348
