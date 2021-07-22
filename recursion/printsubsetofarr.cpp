#include<string.h>
string trim(const string& str)
{
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first)
    {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}
void recursion(string prep,int input[],int idx,int size)
{
    // cout<<prep;
    	int ch=input[idx];
    	if(idx==(size)-1)
        {
            	 cout<<trim(prep+" "+to_string(ch))+"\n";
            	cout<<trim(prep)+"\n";
                return;
        }
    	recursion(prep+" "+to_string(ch),input,idx+1,size);
      	recursion(prep,input,idx+1,size);
}
void printSubsetsOfArray(int input[], int size) 
{
	string s1 = "";
    for(int i=0;i<size;i++)
    {
        	s1 +=to_string(input[i]);
    }
    // cout<<s1;
    recursion("",input,0,size);
	// Write your code here
    
}
