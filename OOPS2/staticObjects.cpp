#include<iostream>
using namespace std;

class Example{
public: 
    //contructor
    Example(){
        cout<<"Constructing...\n";
    }

    //destructor
    ~Example(){
        cout<<"Destructing...\n";
    }
};

int main(){
    if(1){
       static Example e1;//this will decontruct just after program ends
    } 
    
    cout<<"Program Ending...\n";
}