#include<iostream>
using namespace std;

int main(){
    //creation with known n
    int array[5];

    //creation with known and assigning values at the same time
    int arr2[10]={1,3,5};

    //creation without knowing n
    int arr3[]={1,2,3,4,5,6,7,8};

    //outputiing first elements only
    cout<<array[1]<<endl<<arr2[1]<<endl<<arr3[1]<<endl;

    //evaluating size of an array
    int size = sizeof(arr3)/sizeof(arr3[0]);
    cout<<"Size of arr2 : "<<size<<endl;
}