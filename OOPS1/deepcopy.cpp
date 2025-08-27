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

        //deep copy constructor
        Car(Car &original){
            this->name = original.name;
            this->color = original.color;
            this->mileage = new int;
            *(this->mileage) = *(original.mileage);
        }
};

int main(){
    Car c1("tesla", "white", 12);

    Car c2(c1);

    cout<<*(c2.mileage)<<endl;
    *(c1.mileage) = 20;

    cout<<*(c2.mileage)<<endl;
}