int ArrayShift( i
int a[], int n, int m ){
    m = m % n;
    int temp_array[m];
    for(int i = 0;i<m;i++)
        temp_array[i] = a[n-m+i];
    for(int i = n-m-1;i>=0;i--)
        a[i+m] = a[i];
    for(int i = 0;i<m;i++){
        a[i] = temp_array[i];
    }
}
//https://pintia.cn/problem-sets/12/problems/336
