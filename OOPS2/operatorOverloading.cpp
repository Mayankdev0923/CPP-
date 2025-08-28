#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        int cost;

        Car(string name, int cost){
            this->name = name;
            this->cost  = cost;
        }

        Car operator + (Car &obj){
            string newname = this->name +" "+ obj.name;
            int newcost = this->cost + obj.cost;

            Car c3(newname, newcost);
            return c3;
        }
};

int main(){
    Car c1("BMW", 100000);
    Car c2("Porsche", 120000);

    Car fusion = c1+c2;
    cout<<"fusion Name : "<<fusion.name<<endl;
    cout<<"fusion Cost : "<<fusion.cost<<endl;
}