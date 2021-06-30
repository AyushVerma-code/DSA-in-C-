#include<string.h>
void replacePiHelper(char str[], int start)
{
 
   if (str[start] == '\0' || str[start + 1] == '\0') 
   {
        return;
    }
    replacePiHelper(str,start + 1);
    if (str[start] == 'p' && str[start + 1] == 'i') 
    {
        for (int i = strlen(str); i >= start + 2; i--) 
        {
            str[i + 2] = str[i];
        }
	    str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}
void replaceP(char str[])
{
    replacePiHelper(str,0);
}
void replacePi(char input[])
{
        replaceP(input);
}
