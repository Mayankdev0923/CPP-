#include<iostream>
using namespace std;

bool isSorted(int*arr, int n){
    if(n==1){
        return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }
    isSorted(arr,n-1);
}

int main(){
    int arr[] = {3,1,1,2,2,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    string res = isSorted(arr,n)?"sorted":"unsorted";
    cout<<res;
}