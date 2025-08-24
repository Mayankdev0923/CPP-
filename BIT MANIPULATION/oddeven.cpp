#include<iostream>
using namespace std;

int dtb(int num){
    int binary=0;
    int pow = 1;
    while(num>0){
        binary += (num%2)*pow;
        pow*=10;
        num/=2;
    }

    return binary;
}

int main(){
    int x;
    cout<<"Enter your number : ";
    cin>>x;

    // //create binary
    // int y=dtb(x);

    // if(y%10 == 1){
    //     cout<<x<<" is odd.";
    // }
    // else{
    //     cout<<x<<" is even.";
    // }


    //more efficient way
    if(x&1 == 1){
        cout<<x<<" is odd.";
    }
    else{
        cout<<x<<" is even.";
    }
}