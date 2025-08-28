#include<iostream>
using namespace std;

class A{
    public : 
    A(){
        cout<<"Construct : A\n";
    }
    ~A(){
        cout<<"Destruct : A\n";
    }
};

class B : public A{
    public: 
    B(){
        cout<<"Construct : B\n";
    }
    ~B(){
        cout<<"Destruct : B\n";
    }
};

int main(){
    B obj;
    return 0;
}