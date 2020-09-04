int set_grade( struct student *p, int n ){
    int count = 0,index = 0;
    while(index<n){
        if(p->score<60) {count++; p->grade = 'D';}
        else if(p->score<70) p->grade = 'C';
        else if(p->score<85) p->grade = 'B';
        else if(p->score<=100) p->grade = 'A';
        index++; p++;
    }
    return count;
}
//https://pintia.cn/problem-sets/12/problems/349
