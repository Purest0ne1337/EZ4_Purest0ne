int search( int list[], int n, int x ){
    for(int i = 0;i<n;i++){
        if(list[i] == x) return i;
    }
    return -1;
}
//其中list[]是用户传入的数组；n（≥0）是list[]中元素的个数；x是待查找的元素。
//如果找到则函数search返回相应元素的最小下标（下标从0开始），否则返回−1。
