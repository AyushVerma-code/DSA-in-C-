int help2(char *t)
{
    if(*t==NULL)
    {
        return 1;
     }
     char *c=t;
    if(*t=='a')
    {
        if(*(c+1)=='a')
        {
            return help2(t+1);
        }
        else if(*(c+1)=='b')
        {
            return help2(t+1);
        }
        if(*(c+1)==NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if(*t=='b')
    {
        if(*(c+1)=='b'&&*(c+2)=='a')
        {
             return help2(t+2);
        }
        else if(*(c+1)=='b'&&*(c+2)==NULL)
        {
             return 1;
        }
        else
        {
            return 0;
        }
     }
 
}

bool help1(char a[])
{
    char *t;
    t=a;
    if(*t=='a')
    {
        t=t++;
        if(help2(t))
        {
            //cout<<"valid substring";
            return true;
        }
        else
        {
            //cout<<"Not a valid substring";
            return false;
        }
  
    }
    else
    {
        // cout<<"Not a valid substring";
        return false;
    }
}
bool checkAB(char input[])
{
    bool flag;
     flag=help1(input);
     return flag;
}
