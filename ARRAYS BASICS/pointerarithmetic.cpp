#include<iostream>
using namespace std;

int main(){
    //non-modification of arraypointer
    int arr[]={1, 2, 3, 5};
    int a=10;
    int *aptr=&a;

    int y =10;
    aptr = &y;
    //but this'll give error:
    // arr = &y;



    //POINTER ARITHMETIC
    //INCREMENT AND DECREMENT
    int b=10;
    int *ptr=&b;
    cout<<ptr<<endl;
    //increment of bytes in int type
    ptr++;
    cout<<ptr<<endl;



    //ADD AND SUBTRACT CONSTANT
    //adds the size of type multiplied by the constant
    ptr = ptr + 5;
    cout<<ptr<<endl;



    //ADDITION AND SUBTRACTION B/W TWO POINTERS
    //addition not possible
    cout<<aptr<<" + "<<ptr<<" = "<<"Error"<<endl;

    //subtraction possible only when the pointer are of the same type
    cout<<ptr<<" - "<<aptr<<" = "<<ptr-aptr<<endl;
    //this'll give the no of elements/positions between these two addresses


    
    //COMPARISON OF POINTERS(SAME)
    cout<<(ptr>aptr)<<"\t"<<(ptr<aptr)<<"\t"<<(ptr==aptr)<<endl;
}