void Shift( char s[] ){
    char*p = s;
    char temp[] = {s[0],s[1],s[2],'\0'};
    while(*(p+3)!='\0') {
        *p = *(p+3);
        p++;
     }
    for(int i = 0; i < 3;i++){
        p[i] = temp[i];
    }
} 
//https://pintia.cn/problem-sets/12/problems/333
