#include <bits/stdc++.h>
using namespace std;

    int findUnique(int *arr, int n)
    {
        // Do XOR of all elements and return
       sort(arr,arr+n);
        for(int i=0;i<n;i++)
        
        {	
        	if(arr[i]!=arr[i+1]&&arr[i]!=arr[i-1])
                return arr[i];
        }
    }  
