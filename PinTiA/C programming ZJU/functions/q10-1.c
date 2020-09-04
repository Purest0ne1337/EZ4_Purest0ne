int fit(int i){
    int a,b,c;
    c = i%10; i/=10;
    b = i%10; i/=10;
    a = i;
    if(a==b||a==c||b==c) return 1;
    else return 0;
}

int search( int n ){
    int root = 11,count = 0;
    for(int i = 101;i<=n;i++){
        if(i = root*root){
            i+=2*root;root++;
            if(fit(i)) count++;
        }
    }
    return count;
}
//https://pintia.cn/problem-sets/12/problems/351
