#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int * mileage = new int;

        Car(string name, string color, int mileage){
            this->name = name;
            this->color = color;
           *(this->mileage) = mileage;
        }

        //destructor
        ~Car(){
            cout<<"deleting object\n";
            if(mileage!=NULL){
                delete mileage;
                mileage = NULL;
            }
        }
};

int main(){
    Car c1("tesla", "white", 12);
    cout<<c1.name<<endl;
    //now the object will terminate 
}