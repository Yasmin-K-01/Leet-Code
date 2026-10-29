int numberOfSteps(int num) {
    int sum=0,rem=0,count=0;
    while (num>0){
        if(num%2==0){
            num=num/2;}
            else{
                num=num-1;
            }
            count++;
        }
        return count;
}
