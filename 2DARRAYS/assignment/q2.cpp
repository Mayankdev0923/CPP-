#include<iostream>
using namespace std;

void sumOfRow2(int arr[][3], int n, int m){
    int sum=0;
    for(int i=0; i<m; i++){
        sum += arr[1][i];
    }
    cout<<sum;
}

int main(){
    int nums[][3]={{1,4,9},{11,4,3},{2,2,3}};
    sumOfRow2(nums,3,3);
    return 0;
}