#include <iostream>
#include <string>
using namespace std;

void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        cout<<a<<endl;
    else
    {     
        for (int i = l; i <= r; i++)
        {
 		    swap(a[l], a[i]);
 		    permute(a, l+1, r);
 			swap(a[l], a[i]);
        }
    }
}
void printPermutations(string input)
{
    int len=input.size();
    cout<<len;
	permute(input,0,len-1);
}
