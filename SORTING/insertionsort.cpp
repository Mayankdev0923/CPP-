#include<iostream>
using namespace std;

void insertionsort(int* arr, int n){
    for(int pivot = 1; pivot<n; pivot++){
        for(int j=pivot; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }

}

int main(){
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionsort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}