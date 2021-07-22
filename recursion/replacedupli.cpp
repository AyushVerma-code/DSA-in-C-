void removeConsecutiveDuplicates(char *input) {
    if(input[0]=='\0')
    {
        return;
    }
    if(input[0]==input[1])
    {
        int i=1;
        for(; input[i]!='\0';i++)
        {
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeConsecutiveDuplicates(input);
    }
    else
    {
        return removeConsecutiveDuplicates(input+1);
        
    }
    
}
  
