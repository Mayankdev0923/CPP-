#include<iostream>
using namespace std;

class Animal{
    public:
        string place = "Earth";
        
        void breathe(){
            cout<<"breathes..\n";
        }
};
//this is single, for multi level, we can create another class as pets or something like that
class Mammal : public Animal{
    public:
        string bloodtype = "Warm";

        void youngone(){
            cout<<"can give birth as is mammal(not lay eggs)\n";
        }
};

int main(){
    Mammal Cat;
    cout<<Cat.bloodtype<<endl;
    cout<<Cat.place<<endl;

    Cat.youngone();
    Cat.breathe();
}