#include<iostream>
using namespace std;

class Parent{
    public:
        void sayMyName(){
            cout<<"You: Say my name...\n";
            cout<<"Parent: You're Heisenberg....\n";
        }
};

class Child : public Parent{
    public:
        void sayMyName(){
            cout<<"You: Say my name...\n";
            cout<<"Child: You're Heisenberg....\n";
        }
};

int main(){
    Child ch1;
    ch1.sayMyName();
}