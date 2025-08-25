#include<iostream>
using namespace std;

int updatevalue(int num, int index, int value){

    num = num & (~(1<<index));
    int result = (num | (value<<index));
    return result;
}

int main(){
    int num,index,value;
    cout<<"Enter your number : ";
    cin>>num;

    cout<<"Enter the index : ";
    cin>>index;

    cout<<"Enter the value to update (0 or 1) : ";
    cin>>value;

    int newnum = updatevalue(num, index, value);
    cout<<newnum;
}