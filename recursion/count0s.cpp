int countZeros(int n) {
    if(n==0)
    {
        return 1;
    }
    int static count=0;
    if(n>0)
    {
        if(n%10==0)
        {
            count++;
        }
        countZeros(n/10);
    }
    return count;
    
}
   
