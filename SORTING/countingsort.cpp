#include<iostream>
using namespace std;

void countingsort(int* arr, int n){
    //finding freq array size
    int maxval = INT32_MIN;
    
    for(int i=0; i<n; i++){
        maxval = max(maxval,arr[i]);
    }

    //creating freq arrray
    int freq[maxval+1] = {0};
    int index=0;

    //upadteing freq arr.
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    //updating arr
    for(int i=0; i<=maxval; i++){
        if(freq[i]>0){
            for(int j=1;j<=freq[i];j++){
                arr[index++] = i;
            }
        }
    }
}

int main(){
    int arr[] = {1,4,1,3,2,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    countingsort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}