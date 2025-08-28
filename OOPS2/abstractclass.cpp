#include<iostream>
using namespace std;

#define pi 3.14

//this is an abstract class
class Shapes{
    protected: 
        int radius;
    public: 

        //this is a pure virtual function
        virtual void getCircumference() =0;
};

class Circle: public Shapes{
    public:
        Circle(int radius){
            this->radius = radius;
        }

        void getCircumference(){
            cout<<"Circumference : "<<pi*(this->radius)<<endl;
        }
};

int main(){
    Circle c1(5);
    c1.getCircumference();

    //this'll get error: 
    // Shapes s1;
}