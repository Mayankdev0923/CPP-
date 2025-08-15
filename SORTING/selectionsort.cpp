#include<iostream>
using namespace std;

void selectionsort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) { //change '<' to '>' for descending
                minIndex = j; 
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main(){
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
}