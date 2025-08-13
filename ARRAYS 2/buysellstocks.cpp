#include<iostream>
using namespace std;

void bestbuy(int *arr, int n){
    int bestbuy[n] = {INT32_MAX};
    int maxprofit = 0;
    for(int i=1; i<n; i++){
        bestbuy[i] = min(bestbuy[i-1],arr[i-1]);
    }
    for (int i = 0; i < n; i++)
    {
        maxprofit = max(maxprofit,(arr[i]-bestbuy[i]));
    }
    cout<<"Maximum pprofit : "<<maxprofit;
}

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bestbuy(arr,n);    
}