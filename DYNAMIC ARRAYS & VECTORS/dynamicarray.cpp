#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Size : ";
    int size;
    cin>>size;

    //initializing a new space dynamically
    int *arr = new int[size];

    //entering the values
    int count = 0;
    for(int i=0; i<size; i++){
        arr[i] = count++;
    }

    //outputting
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    //deallocating the space reserved in heap
    delete [] arr;

}