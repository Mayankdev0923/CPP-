#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int index;
    cout<<"Enter the index : ";
    cin>>index;

    int bitmask;
    bitmask = 1<<index;
    num = num|bitmask;

    cout<<"After setting bit : "<<num;
}