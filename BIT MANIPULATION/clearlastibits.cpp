#include<iostream>
#include<cmath>
using namespace std;

int clearlastdigits(int num, int index){
    int bitmask = ~0<<index;

    int result = num & bitmask;
    return result;
}

int main(){
    int num,index;
    cout<<"Enter your number : ";
    cin>>num;

    cout<<"Enter the index : ";
    cin>>index;

    int newnum = clearlastdigits(num, index);
    cout<<"After clearing : "<<newnum;
}