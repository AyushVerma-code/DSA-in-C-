bool checkPalindrome(char input[])
{
        bool check =1;
        
        int c;
        for(int i=0;input[i]!='\0';i++)
        {
                c=c+1;
        }
        int arr[100];
        for(int i=0;i<c;i++)
        {
                arr[i]=input[i];
        }
        for(int i=0;i<c;i++)
        {
                if(arr[i]!=arr[c-1-i])
                {
                    check=0;
                    break;
                }
        }
        if(check)
            return 1;
        else 
            return 0;
   
}
