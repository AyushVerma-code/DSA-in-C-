#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int findDuplicate(int *arr, int n)
    {
    sort(arr,arr+n);
    int j=arr[0];
    
    for(int i=arr[1];i<=arr[n-1];i++)
    {
        j= j^i; 
    }
    for(int k=0;k<n;k++)
    {
        j= j^arr[k];
    }
    return j;
   }
