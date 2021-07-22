#include<iostream>
using namespace std;
int s(char b[])
{
    int s=0;
    for(int i=0;b[i]!='\0';i++)
        s=s+1;
//	cout<<s<<endl;
    return s;
}
void solved(char p[],int n,int it)
{
  //  	cout<<p<<n;
            
    if(p[it]=='\0'||p[it+1]=='\0')
        {
        	return;
        }
    // cout<<p[2];
    	if (p[it]==p[it+1]) 
    	{
        	for(int i=n;i>=it+1;i--) 
        	{
            	p[i+1] = p[i];
                // int o=i-1;
        	}
	    	p[it+1]='*';
 	solved(p,n+1,it+ 1);           
		}
    else
    solved(p,n,it+ 1);
}
void solve(char a[],int size1)
{
    int start=0;
  //  cout<<size1<<endl;
    solved(a,size1,start);
        // cout<<sizeof(a)/sizeof (a[0])<<endl;

}
void pairStar(char input[]) 
{
    int size=s(input);
    solve(input,size);
   // Write your code here
}
