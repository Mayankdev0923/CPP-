#include<iostream>
using namespace std;

void brutef(int arr[][4],int n, int m, int key){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == key){
                cout<<"Found at : "<<i<<", "<<j;
                return;
            }
        }
    }
    cout<<"NOT FOUND";
}

int main(){
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    brutef(arr,4,4,33);
    return 0;
}