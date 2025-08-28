#include<iostream>
using namespace std;

class Car{
    public:
        string brandName;
        string year;

        Car(string brandName, string year){
            this->brandName = brandName;
            this->year = year;            
        }

        //function overloading
        void print(string text){
            cout<<"string : "<<text<<endl;
        }

        //same function name but different params
        void print (int nums){
            cout<<"int : "<<nums<<endl;
        }
};

int main(){
    Car c1("pagani", "2024");
    c1.print("roar");
    c1.print(6767);    
}