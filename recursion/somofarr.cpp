int sum(int input[], int n) {
    
        if(n==0)
            return 0;
        if(n==1)
            return input[0];
        int lsum=sum(input+1,n-1);
        return lsum+input[0];
}
