#include<iostream>
using namespace std;

class car{
    string name;
    string color;

public:

    //constructor without params
    car(){
        cout<<endl<<"object is created without params"<<endl;
    }

    //constructor
    car(string nameval, string colorval){
        //this will print as soon as we create an object
        cout<<"object is being created with values"<<endl;

        //this will input the name & color
        name=nameval;
        color=colorval;
    }

    //other methods
    void start(){
        cout<<endl<<name<<" : brand";
    }    

    void stop(){
        cout<<endl<<color<<" : color";
    }
};

int main(){
    car c1("BYD-Seal", "Blue");
    c1.start();
    c1.stop();

    car c2;
}