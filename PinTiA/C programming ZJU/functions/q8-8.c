bool palindrome( char *s ){
    char*p = s,*q = s;
    while(*++q);
    q--;
    while(p++<q--){
        if(*p!=*q) return false;
    }
    return true;
}
//https://pintia.cn/problem-sets/12/problems/342
