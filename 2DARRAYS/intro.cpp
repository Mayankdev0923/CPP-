#include<iostream>
using namespace std;

void print(int arr[][3], int rows, int m){
    int cols = m/rows;
    
    cout<<rows<<" , "<<cols<<endl;
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int arr[][3] = {{0,1,2},{3,4,5},{6,7,8},{6,7,8}};
    int rows  = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr)/sizeof(arr[0][0]);
    print(arr, rows, m);
    return 0;
}