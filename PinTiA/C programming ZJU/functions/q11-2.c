int getindex( char *s ){
    char *day[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for(int i = 0;i<7;i++){
        if(!strcmp(s,day[i])) return i;
    }
    return -1;
}
//https://pintia.cn/problem-sets/12/problems/360
