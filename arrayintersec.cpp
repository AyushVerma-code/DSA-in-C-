#include <bits/stdc++.h>
void intersection(int *arr1, int *arr2, int n, int m) 
{
   sort(arr1,arr1+n);
   sort(arr2,arr2+m);
	int size;
    if(n>m)
        	size=n;
    else
        	size=m;
    // int i =arr1[0], j =arr2[0];
    for(int l=0;l<size;l++)
    {
       int *i=arr1;
        int *j=arr2;
        if(*i==*j)
       {
           cout<<*i;
       }
        else 
        {
            if(*i>*j)
                i=i+1;
            else
                	j=j+1;     
    	}
    }    
}



    
