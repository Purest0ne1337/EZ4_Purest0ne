void strmcpy( char *t, int m, char *s ){
    t= t+m-1;
    while(*t)*s++=*t++;
    *s = '\0';
}
//https://pintia.cn/problem-sets/12/problems/338
