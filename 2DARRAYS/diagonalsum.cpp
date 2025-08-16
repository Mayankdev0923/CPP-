#include<iostream>
using namespace std;

int diagonalelementsum(int arr[][3],int n){
    int primarydiagonalsum = 0;
    int secondarydiagonalsum = 0;

    for(int i=0;i<n;i++){
        primarydiagonalsum += arr[i][i];
        if(arr[i][i]!=arr[i][n-i-1]){
            secondarydiagonalsum += arr[i][n-1-i];
        }
    }


    return primarydiagonalsum + secondarydiagonalsum;
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<diagonalelementsum(arr,3);
    return 0;
}