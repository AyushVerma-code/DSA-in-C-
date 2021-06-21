int allIndexes(int input[], int size, int x, int output[]) {
     if(size==0)
        return 0;
    if(size==1)
    {
        if(input[0]==x)
        {
            output[0]=0;
            return 1;
        }
        else
            return 0;
    }
    int ans=allIndexes(input+1,size-1,x,output);
    for(int i=0;i<ans;i++)
    {
        output[i]++;
    }//we are updating the values the output array
    if(input[0]==x)
    {
        for(int j=ans;j>0;j--)
        {
            output[j]=output[j-1];
        }
        output[0]=0;
        ans++;
        return ans;

        }
    else
        return ans;
    }
