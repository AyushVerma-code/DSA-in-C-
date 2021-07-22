#include<vector>
void printAllSubsetsRec(int arr[], int n, vector<int> v,int sum,int tempsum,int size)
{
    if (sum == tempsum) 
    {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
        return;
    }
 	 if (n == size)
        return;
 	printAllSubsetsRec(arr, n+1, v, sum,tempsum,size);
    v.push_back(arr[n]);
    printAllSubsetsRec(arr, n+1, v, sum,tempsum+arr[n],size);
}
void printSubsetSumToK(int input[], int size, int k)
{
    vector<int> v;
    printAllSubsetsRec(input,0,v,k,0,size);
}
