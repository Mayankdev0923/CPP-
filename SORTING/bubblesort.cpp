#include<iostream>
using namespace std;

void bbsort(int *arr, int n){
    
    for(int i=n-2; i>=0; i--){
        bool swapped = false;
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void bbsortdesc(int *arr, int n){
    
    for(int i=n-2; i>=0; i--){
        bool swapped = false;
        for(int j=0; j<=i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

int main(){
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bbsort(arr,n);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}