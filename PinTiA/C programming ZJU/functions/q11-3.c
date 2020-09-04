int max_len( char *s[], int n ){
    int max = 0;
    for(int i =0;i<n;i++){
        int len = strlen(s[i]);
        len > max ? (max = len):(max = max);
    }
    return max;
}
//https://pintia.cn/problem-sets/12/problems/361
