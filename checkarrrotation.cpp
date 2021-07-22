int arrayRotateCheck(int *input, int size)
{
    int min=input[0];
    int i;
    for(i=0;i<size;i++)
    {
        if(input[i]<min)
        {
            min=input[i];
        }
    }
    for(i=0;i<size;i++)
    {
        if(min==input[i])
        {
            return i;
        }
    }
    //Write your code here
}
