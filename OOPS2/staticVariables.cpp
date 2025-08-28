#include<iostream>
using namespace std;

//static variable for many functions
static int z=0;

void printx(){
    cout<<z++<<endl;
}

class Example{
    public: 
        static int x;//a static only expression can't be initilaized inside the class
        static const int y=0; //shared by all of the objects but is immutable
        
        void xout(){
            cout<<x++<<endl;
        }

        void yout(){
            cout<<y<<endl;
        }
};

//here we have accessed the int tyoped variable x whose implementaton lies in Example class
int Example::x = 0;

int main(){

    //static variables in classes
    Example e1,e2,e3;
    cout<<"printing X : \n";
    e1.xout();
    e2.xout();
    e3.xout();
    
    //const static
    cout<<"printing Y : \n";
    e1.yout();
    e2.yout();
    e3.yout();
    
    //static int in function(s)
    cout<<"printing Y : \n";
    printx();
    printx();
    printx();

}