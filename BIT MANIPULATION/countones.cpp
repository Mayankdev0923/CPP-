#include<iostream>
using namespace std;

int count(int num){
    int count=0;
    while(num>0){
        count += num%2;
        num/=2;
    }
    return count;
}

//using bit mmanipulation
int count(int*num){
    int n =*num, count=0, basebit;
    while(n>0){
        basebit = n&1;
        count += basebit;
        n=n>>1;
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;

    int occurence = count(&num);
    cout<<"Total set bits : "<<occurence;
    return 0;
}