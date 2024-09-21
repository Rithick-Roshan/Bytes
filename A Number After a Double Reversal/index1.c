bool isSameAfterReversals(int num) {
   
    int sum=0; int num2=num;
    while(num!=0){
        int temp=num%10;
        sum=sum*10+temp;
        num/=10;
    }
    int sum2=0;
    while(sum!=0){
        int temp=sum%10;
        sum2=sum2*10+temp;
        sum/=10;
    }
    if(num2-sum2)
       return false;
    else
       return true;
}
