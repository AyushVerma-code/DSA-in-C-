
#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)                          //swapping function
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[], int s, int e)                  //for finding pivot element in the array
{
    int pivot=arr[e];
    int i=s-1;
    for(int j=s;j<e;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,e);
    return (i+1);
    
}

void quickSort(int arr[], int s, int e)              //sorting function 
{
    if(s>=e)
    {
        return;
    }
    else
    {
       int pi= partition(arr,s,e);
       quickSort(arr,s,pi-1);
       quickSort(arr,pi+1,e);
    }
}

int main() {
    
    int arr[5]={5,2,8,1,7};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
