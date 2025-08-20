#include<iostream>
using namespace std;

int * heapmempointer(){

    //alloc memory space
    int * ptr = new int;

    //storevalue at space
    *(ptr) = 1200;
    cout<<"value at initialisation : "<<*(ptr)<<endl;

    //return pointer
    return ptr;
}

int main(){
    int *address = heapmempointer();

    cout<<"Value after function : "<<*(address);
    //this shows that memory exists after function ends and remain in heap

}