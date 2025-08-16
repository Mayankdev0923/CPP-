#include<iostream>
using namespace std;

int main(){
    int n=4,m = 4;
    int arr[n][m] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int srow = 0;
    int scol = 0;
    int erow = n-1;
    int ecol = m-1;

    while(srow <= erow && scol <= ecol){
        for(int i = scol; i<=ecol; i++){
            cout<<arr[srow][i]<<"\t";
        }

        for(int i=srow+1; i<=erow; i++){
            cout<<arr[i][ecol]<<"\t";
        }

        for(int i=ecol-1; i>=scol; i--){
            if(srow == erow) break;
            cout<<arr[erow][i]<<"\t";
        }

        for(int i=erow-1; i>=srow+1;i--){
            if(scol == ecol) break;
            cout<<arr[i][scol]<<"\t";
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
}