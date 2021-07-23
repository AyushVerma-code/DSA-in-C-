#include <bits/stdc++.h>
int maximumProfit(int budget[], int n) 
{
	sort(budget,budget+n);
    int maxsum=0;
    int temp;
    int *cost = new int[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        	cost[i]=budget[i]*(n-i);
    }
        c=0;
        	for(int j=0;j<n;j++)
            {
                if(cost[j]>=c)
                {
    
                    c=cost[j];
                }
                // maxsum=temp;
            }
        	
    
	return c;
}
