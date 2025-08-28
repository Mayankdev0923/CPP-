#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void showRelation(){
            cout<<"The relation is Parent\n";
        }
};

class Child : public Parent{
    public:

        void showRelation(){
            cout<<"The relation is Child\n";
        }
};

int main(){
    Child ch;
    Parent * Par;

    Par = &ch; //run time binding
    Par->showRelation(); //here virtual function plays a role and the child implementation is used even if the pointer is of parent class type
}