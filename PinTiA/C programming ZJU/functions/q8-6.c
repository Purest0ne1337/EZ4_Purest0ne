void delchar( char *str, char c ){
    char *p = str,*q = str;
    while(*q){
        while(*q == c) q++;
        *p++ = *q++;
    }
    *p ='\0';
}
//https://pintia.cn/problem-sets/12/problems/339
