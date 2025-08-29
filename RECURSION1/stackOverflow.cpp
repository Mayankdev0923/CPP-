#include<iostream>
using namespace std;

void nothing(){
    cout<<"hehe\n";
    nothing();
}

int main(){
    nothing();
}