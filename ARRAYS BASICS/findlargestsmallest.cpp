#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 5, 0};
    int max = arr[0];
    int min=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            //update new maximum
            max=arr[i];
        }
        if(min>arr[i]){
            //update new minimum
            min=arr[i];
        }
    }
    cout<<"maximum: "<<max<<endl;
    cout<<"minimum: "<<min;
}