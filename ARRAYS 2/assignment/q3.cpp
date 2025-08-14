#include<iostream>
using namespace std;

int maxpf(int* arr, int n){
    int maxprod = INT32_MIN;
    for(int start=0; start<n; start++){
        int currprod = 1;
        for(int end=start; end<n; end++){
            currprod *= arr[end];
            maxprod = max(maxprod, currprod);
        }
    }
    return maxprod;
}

int main(){
    int arr[] = {-2,0,-1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxpf(arr,n);
    return 0;
}