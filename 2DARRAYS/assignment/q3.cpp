#include<iostream>
using namespace std;

void transpose(int arr[][3], int n, int m){
    int transp[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            transp[j][i] = arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<transp[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int arr[][3] = {{1,2,3},{4,5,6}};
    transpose(arr, 2, 3);
    return 0;
}