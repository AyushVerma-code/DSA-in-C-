#include<iostream>
using namespace std;
int asize(char a[])
{
        int s=0;
        for(int i=0;a[i]!='\0';i++)
            s=s+1;
        return s;
}
void check(char b[],int size1,int i1,int j1)
{
        int temp;
    	if(size1==0)	
            return ; 
    	if(size1==1)
            	return ;
       	if(b[i1]=='p'&&b[j1]=='i')
        {   
        		for(int k=size1;k>=j1+1;k--)
                {
                    b[k+2]=b[k];
                }
            	b[i1]='3';
            	b[j1]='.';
            	b[j1+1]='1';
            	b[j1+2]='4';
  
        }
       check(b,size1-1,i1+1,i1+2);
}
void replacePi(char input[])
{
		int i=0;
    //	int j=i+1;
    	int size=asize(input);
    	check(input,size,i,i+1);
}
