void splitfloat( float x, int *intpart, float *fracpart ){
    *intpart = (int) x;
    *fracpart = x - *intpart;
}
//拆分实数的整数与小数部分
