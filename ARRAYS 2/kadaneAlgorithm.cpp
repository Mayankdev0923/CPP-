#include<iostream>
using namespace std;

void print_max_subarr_sum(int arr[], int n){
    int maxSum = INT32_MIN;
    int currSum = 0;
    for(int i=0; i<n;i++){
        currSum+=arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"Max Sum : "<<maxSum<<endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_max_subarr_sum(arr,n);
    return 0;
}