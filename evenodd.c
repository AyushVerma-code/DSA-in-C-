#include <stdio.h>
 int main()
{
	int a;
	printf("Enter the Number");
    scanf("%d",&a);
	if(a%2==0)
	{
    	printf("%d is an even number",a);
    	
	}
	else
	{
        printf("%d is an odd number",a);
    	
	}
	return 0;
}
