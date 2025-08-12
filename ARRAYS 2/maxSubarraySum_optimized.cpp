#include<iostream>
using namespace std;

void print_max_subarr_sum(int arr[], int n){
    int maxSum = INT32_MIN;
    for(int start=0; start<n; start++){
        int currSum = 0;
        for(int end=start; end<n; end++ ){
            currSum+=arr[end];
            maxSum = max(maxSum,currSum);            
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