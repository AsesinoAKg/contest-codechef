 
#include <algorithm>
#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 2, 4, 7, 2};
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    reverse(arr, arr + n);

    for(int i=0; i<n; i++){
        arr[i] = arr[i] + arr[n-i-1];
        cout << arr[i]<<" ";
    }
    for(int i=0; i<n; i++){
       int ans = arr[n-i-1]/10;
       arr[n-i-1] += ans;
       cout << arr[i]<<" ";
       
    }
    return 0;
}