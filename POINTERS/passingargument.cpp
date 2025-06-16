#include<iostream>
using namespace std;

int changereference(int &a){
    a=300;
    cout<<"\t\tchanged value in function after using alias : "<<a;
}

int changepointer(int *a){
    *a=78;
    cout<<"\t\tchanged value in function after using pointer : "<<*a;
}

int changevalue(int a){
    a=40;
    cout<<"\tchanged value in function after using pass by value : "<<a;
}

int main(){
    int a=12, b=13, c=14;
    cout<<"Value before passing : "<<endl<<"a : "<<a<<endl<<"b : "<<b<<endl<<"c : "<<c<<endl;

    //pass by value
    cout<<endl<<"proceeding by pass by value :"<<endl<<endl;
    changevalue(a);
    cout<<endl<<"\t\tOriginal value of a in variable : "<<a<<endl;

    //pass by reference
    cout<<endl<<endl<<"proceeding by pass by reference :"<<endl<<endl;

    //using pointer
    cout<<"\tusing pointer : "<<endl<<endl;
    int *pointertob= &b;
    changepointer(pointertob);
    cout<<endl<<"\t\tOriginal value of b in variable : "<<b<<endl<<endl;

    //using reference variable
    cout<<"\tusing reference variable : "<<endl<<endl;
    int &referc = c;
    changereference(referc);
    cout<<endl<<"\t\tOriginal value of c in variable : "<<c<<endl<<endl;
    

}