#include<iostream>
using namespace std;

int main(){
    //creating a variable
    int a=10;
    //create a pointer
    int *ptr=&a;
    //using dereference to print value of a
    cout<<*ptr;
}