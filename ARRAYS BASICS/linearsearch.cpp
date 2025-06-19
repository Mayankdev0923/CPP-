#include<iostream>
using namespace std;

//Time Complexity : O(n)
int linearsearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(key==arr[i]){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=12;

    int ls = linearsearch(arr, n, key);
    cout<<" Element found at index : "<<ls<<endl;
}