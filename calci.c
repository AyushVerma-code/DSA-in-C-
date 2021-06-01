#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    printf("Enter The Operator( +, -, *, /)");
    scanf("%c",&op);
    
    int a,b;
    printf("Enter the Operands");
    scanf("%d",&a);
    scanf("%d",&b);
    
    switch(op)
    {
        case '+':{
                printf("%d", a+b);
                break;
        }
        case '-':{
                printf("%d", a-b);
                  break;
        }
        case '*':{
                printf("%d", a*b);
                  break;
        }
        case '/':{
                printf("%d", a/b);
                  break;
        }
        default :
                printf(" Wrong Input");
        
    }
    return 0;
    
    
}    
