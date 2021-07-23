#include <bits/stdc++.h>
using namespace std;
bool helper(int* arr, int n, int start, int lsum, int rsum)
{
    if (start == n)
        return lsum == rsum;
     if (arr[start] % 5 == 0)
        lsum += arr[start];
    else if (arr[start] % 3 == 0)
        rsum += arr[start];
    else
        return helper(arr, n, start + 1, lsum + arr[start], rsum)
           || helper(arr, n, start + 1, lsum, rsum + arr[start]);
    return helper(arr, n, start + 1, lsum, rsum);
}
bool splitArray(int* input, int n)
{
    return helper(input, n, 0, 0, 0);
}
