//6-6 求单链表结点的阶乘和 (15分)
int Fact(int num){
    int Fact=1;
    for(int i=2;i<=num;i++)
        Fact*=i;
    return Fact;
}

int FactorialSum( List L ){
    int Sum=0;
    while(L){
        Sum+=Fact(L->Data);
        L=L->Next;
    }
    return Sum;
}
