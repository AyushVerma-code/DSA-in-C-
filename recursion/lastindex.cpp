int lastIndex(int input[], int size, int x) {
       if(size==0||size<0)
    {
        return -1;
    }
    if(input[size]==x)
    {
        return size;
    }
   
    
  lastIndex(input,size-1,x);
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

}
