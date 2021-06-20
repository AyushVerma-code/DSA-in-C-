int firstIndex(int input[], int size, int x) {
    int static b=0;
    
    if(size==b)
    {
        return -1;
    }
    
    if(input[b]==x)
    {
        return b;
    }
    b=b+1;
    int ansa=firstIndex(input+1,size-1,x);
    return ansa;
    
}
