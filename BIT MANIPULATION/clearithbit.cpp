#include<iostream>
using namespace std;

void clearbit(int *num, int index){
    int n = *num;
    int bitmask = ~(1<<index);
    *num = (n&bitmask);
}

int main(){
    int num,index;
    cout<<"Enter your number : ";
    cin>>num;

    cout<<"Enter the index : ";
    cin>>index;

    clearbit(&num, index);

    cout<<"After change : "<<num;
}