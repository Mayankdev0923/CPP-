#include<iostream>
using namespace std;

int fastExpo(int base, int pow){
    int ans =1;

    while(pow>0){
        int lastbit = pow&1;
        if(lastbit){
            ans*=base;
        }
        base = base*base;
        pow=pow>>1;
    }

    return ans;
}

int main(){
    int base,expo;
    cout<<"Enter the base : ";
    cin>>base;

    cout<<"Enter the exponent : ";
    cin>>expo;

    cout<<"ans in o(logn) time complexity : "<<fastExpo(base, expo);
}