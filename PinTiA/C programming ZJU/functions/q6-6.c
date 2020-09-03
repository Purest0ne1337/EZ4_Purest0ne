int reverse( int number ){
    int factor = 1;
    if(number<0) {
        number = -number;
        factor = -1;
    }
    int sum = 0;
    while(number!=0){
        sum *= 10;
        sum += number % 10;
        number /= 10;
    }
    return factor*sum;
}
//逆序数
