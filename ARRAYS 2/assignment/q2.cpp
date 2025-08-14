#include <iostream>
using namespace std;

void transform(int *arr, int n, int key){

    int transf[n];

    for(int i=0; i<n; i++){
        if (key-i <= 0)
        {
            transf[i-key] = arr[i];
        }
        else if (key-i > 0)
        {
            transf[n-(key-i)] = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        arr[i] = transf[i];
    }
    
}

int getindex(int*arr,int n,int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {0, 1, 2, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int target = 3;
    
    transform(arr, n, key);
    int res = getindex(arr,n,target);
    cout<<res;
    return 0;
}