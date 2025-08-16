#include<iostream>
using namespace std;

void idiot(int (*ptr)[4]){
    cout<<"konnichiwa "<<ptr[0][0]<<endl;
    
}

void printelement(int (*ptr)[4],int i, int j){
    int value  = *((*(ptr + i))+j);
    cout<<"value at ("<<i<<", "<<j<<") : "<<value<<endl;
}

// void idiot(int arr[][4]){
//     cout<<"konnichiwa "<<arr[0][0]<<endl;
// }

int main(){
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};

    idiot(arr);
    printelement(arr,1,1);
    cout<<(arr+1)<<" != "<<&arr[0][1]<<endl;
    cout<<(arr+1)<<" = "<<&arr[1][0]<<endl;
    return 0;
}