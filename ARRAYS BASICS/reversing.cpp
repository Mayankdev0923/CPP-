#include<iostream>
using namespace std;

//using no extra space
//Space Complexity : O(1)
//Time Complexity : O(n)
void reverse(int arr[], int n){
    int a;
    for(int i=0; i<n/2; i++){
        a = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-i-1] = a;
    }
}

//using a seperate array of same size
//Time Complexity : O(n)
//Space Complexity : O(n)
void reversebyspace(int arr[], int n){
    int rev[n];
    for(int i=0 ; i<n ; i++){
        rev[i] = arr[i];
    }

    for(int i=0 ; i<n ; i++){
        arr[i] = rev[n-i-1];
    }
    
}

int main(){
    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
    int n =sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // reverse(arr,n);
    reversebyspace(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}