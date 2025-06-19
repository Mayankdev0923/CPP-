#include<iostream>
using namespace std;

//array printing function without pointer arithmetic
// takes input of starting point, array size, increment in hexadecimal to be made
void printarray(int *ptr, int n, int incr){
    //endpoint
    int *till = (int *)((int)ptr+n);

    //startpoint
    int *i=ptr;

    while(i<till){
        cout<<*i<<" ";

        //updating to next position
        int *med = (int *)((int)i+incr);
        i=med;
    }

    cout<<endl;

}

//simpler function without passing pointer but complete array
void printarr(int arr[], int n){

    //n should not be equal to sizeof(arr)/sizeof(arr[0]) because here 'arr' is an integer pointer not the array.
    //hence we've taken n as input
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }

    cout<<endl;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr);
    int incr=sizeof(arr[0]);
    //array name is its pointer
    printarray(arr,n,incr);
    printarr(arr, n/incr);
}