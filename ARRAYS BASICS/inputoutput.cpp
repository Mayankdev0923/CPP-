#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int n= sizeof(arr)/sizeof(arr[0]);

    //dynamically takes input
    for(int i=0; i<n; i++){
        cout<<"Enter the value for index "<<i<<" :";
        cin>>arr[i];
        cout<<endl;
    }

    //outputting the array
    cout<<"Outputting array :"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }

}