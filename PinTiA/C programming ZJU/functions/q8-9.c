void StringCount( char *s ){
    int upper=0,lower=0,space=0,number=0,others=0;
    while(*s){
        if('A'<=*s && *s<='Z') upper++;
        else if('a'<=*s && *s<='z') lower++;
        else if(*s==' ') space++;
        else if('0'<=*s && *s<='9') number++;
        else others++;
        s++;
    }
    printf("%d %d %d %d %d",upper,lower,space,number,others);
}
//https://pintia.cn/problem-sets/12/problems/343
