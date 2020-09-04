void CountOff( int n, int m, int out[] ){
    int incircle[n];
    for(int i =0;i<n;i++) incircle[i] = 1;
    int index=-1,outed=0;
    while(outed<n){
        for(int count = 0;count<m;){
            index = (index+1)%n;
            if(incircle[index]) count++;
        }
        incircle[index] = 0;
        out[index] = ++outed;
    }
}
//Josephus problem
