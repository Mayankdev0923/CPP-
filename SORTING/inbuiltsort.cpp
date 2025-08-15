#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    // sort(arr,arr+n,greater<int>());

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}