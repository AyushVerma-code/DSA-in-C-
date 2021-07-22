int binarySearch(int input[],int size,int element)
{
       /* int s=0;
        int e=s-1;
        int q=bs(input,s,e,element);*/
 int r=size-1;
    int l=0;
    int x=element;
    //int i;

    while (l <= r) 
    {
        int m = l + (r - l) / 2;
  
        // Check if x is present at mid
        if (input[m] == x)
            return m;
  
        // If x greater, ignore left half
        if (input[m] < x)
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
  
    // if we reach here, then element was
    // not present
    return -1;
}
