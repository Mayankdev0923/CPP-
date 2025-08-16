#include<iostream>
using namespace std;

void binarysearch(int arr[][4], int n, int m, int key){
    for(int i=0; i<n; i++){
        int start=0,end=m-1;
        
        while(start<end){
            int mid = (start+end)/2;
            if(arr[i][mid] == key){
                cout<<"FOUND AT : "<<i<<", "<<mid;
                return;
            }
            else if(arr[i][mid] > key){
                end = mid-1;
            }
            else if(arr[i][mid] < key){
                start = mid+1;
            }
        }
    }

    cout<<"NOT FOUND";
}

void binarysearch_col_wise(int arr[][4], int n, int m, int key){
    for(int i=0; i<m; i++){
        int start=0,end=n-1;
        
        while(start<end){
            int mid = (start+end)/2;
            if(arr[i][mid] == key){
                cout<<"FOUND AT : "<<i<<", "<<mid;
                return;
            }
            else if(arr[i][mid] > key){
                end = mid-1;
            }
            else if(arr[i][mid] < key){
                start = mid+1;
            }
        }
    }

    cout<<"NOT FOUND";
}

int main(){
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    binarysearch_col_wise(arr,4,4,33);

    return 0;
}