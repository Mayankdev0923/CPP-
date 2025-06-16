#include<iostream>
using namespace std;

int main(){
    //create a variable
    int a=10;
    //create a pointer to a
    int *ptr=&a;
    //print address contained in ptr
    cout<<ptr;


    //creating a pointer to a pointer
    int **pptr=&ptr;
    //printing pptr
    cout<<endl<<pptr;

    //printing the size of pointer and pointer of pointer
    cout<<endl<<"size of ptr : "<<sizeof(ptr);
    cout<<endl<<"size of pptr : "<<sizeof(pptr);
}