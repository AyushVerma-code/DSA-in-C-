#include<stdio.h>
int main()
{
    int x=12255;
    int num,i,p,r,j,cnt=0,flag=0;
    int a[x], freq[10]={0};
    num=p=x;
    while(x!=0)
    {
        a[cnt]=x%10;
        x=x/10;
        cnt++;
    }
    while(p!=0)
    {
        r=p%10;
        p=p/10;
        freq[r]++;
    }
    for(i=0;i<cnt;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            if(a[i]==a[j])
            {
                flag++;
            }
        }
    }
    if(flag!=0)
    {
        printf("The number of digits which are repeated in %d is %d\n",num,flag);
    }
    for(i=0;i<10;i++)
    {
        if(freq[i]>1)
            printf("%d is repeated : %d times\n",i,freq[i]);
    }
}
