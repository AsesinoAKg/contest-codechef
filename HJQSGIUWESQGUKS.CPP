//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    int arr[] = { 5, 7, 8, 9};
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    reverse(arr, arr + n);

    for(int i=0; i<n; i++){
        arr[i] = arr[i] + arr[n-i-1];
        if(i>(n-i-1)){
             arr[i] = arr[n-i-1];
        }
    }
    for(int i=0; i<n; i++){
       int ans = arr[n-i-1]/10;
       arr[n-i-2] += ans;
       if((n-i-1)==0){
        arr[n-i-1] = arr[n-i-1];
       }
       else if(ans>=1){
        arr[n-i-1] = arr[n-i-1]%10;
       }
       else{
         arr[n-i-1] = arr[n-i-1];
       }
    }
    reverse(arr, arr + n);
    for(int i=0; i<n; i++){
        cout<<arr[n-i-1]<<" ";
        }
    return 0;
}
