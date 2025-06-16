#include<iostream>
using namespace std;

int main(){
    //creating a null pointer
    int *ptr=NULL;

    //creating another null pointer;
    int *ptr2=0;

    //printing values of pointers
    cout<<"value at ptr : "<<ptr<<endl;
    cout<<"value at ptr2 : "<<ptr2<<endl;

    //modifying pointers
    int a=98;
    ptr=&a;
    ptr2=&a;

    //printing new values
    cout<<"new value at ptr : "<<ptr<<endl;
    cout<<"new value at ptr2 : "<<ptr2<<endl;

    //we cant dereference a null pointer: comment out code to try and get segmentation error

    /*
    int *ptr3=NULL;
    cout<<*ptr3;
    */

}