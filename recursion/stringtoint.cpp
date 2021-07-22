#include<iostream>
using namespace std;
int s(char a[])
{
    	int z=0;
    	for(int i=0;a[i]!='\0';i++)
            	z=z+1;
		return z;
}
int help(char input[],int n)
{
    	int ta[n];
    	// int t;
       	for(int i=0;input[i]!='\0';i++)
        {
        	ta[i]=int(input[i]);
            // cout<<ta[i];
        }
    // cout<<"\n";
    	for(int i=0;input[i]!='\0';i++)
        {
        	// arr[i]=int(input[i]);
// cout<<input[i];
            // cout<<"- ";

        	ta[i]=ta[i]-48;
            // cout<<ta[i];
            // cout<<" ";
        }
    	
    	int x=0;
   		for(int i=0;i<(sizeof(ta)/sizeof(ta[0]));i++)
        {
            	// for(int j=x=ta[i];
            	// x=x*10;
            // cout<<ta[i];
            // cout<<" ";
            	x=x*10+ta[i];
                // x=x*10;
         // cout<<x;   	
            
        }
    return x;
    
    	
    	
}
int stringToNumber(char input[]) 
{
	   // int num = "1234"; // Write your code here
	int s1=s(input);
   int ans=help(input,s1);
  return ans;
}


