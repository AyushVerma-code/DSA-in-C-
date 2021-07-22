void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
} 
void rotate(int *input, int d, int n)
{
  rvereseArray(input,0,n-1);
  rvereseArray(input,0,n-d-1); 
  rvereseArray(input,n-d,n-1);//Write your code here
}
