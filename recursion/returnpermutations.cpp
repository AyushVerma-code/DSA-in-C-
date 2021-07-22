#include <string>
using namespace std;
int index=0;
void permute(string a,string t[], int l, int r)
{
    if (l == r)
	 { 
        t[index]=a;
        // cout<<t[index]<<" ";
    	index=index+1;
    }    
    else
    {
   
        for (int i = l; i <= r; i++)
        {
 		    swap(a[l], a[i]);
 		    permute(a,t,l+1,r);
 			swap(a[l], a[i]);
        }
    }
}
int returnPermutations(string input, string output[])
{
    int len=input.size();
	permute(input,output,0,len-1);
}
