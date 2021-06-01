#include <stdio.h>
 int main()
{
	int a,b,c;
	printf("Enter 3 Numbers");
    scanf("%d""%d""%d",&a,&b,&c);
    if(a>b&&a>c)
	{
        printf("The largest number is %d",a);
	}
	else if (b>c&&b>a)
	{
         printf("The largest number is %d",b);
	}
	else if(c>b)
	{
         printf("The largest number is %d",c);
	}
	else
	{
         printf("The largest number is %d",b);
	}
 return 0;
}
