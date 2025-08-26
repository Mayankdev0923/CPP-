#include<iostream>
using namespace std;

class Student{
//defines public accessible
public:
    //properties/attribbutes
    string name;
    float cgpa;

    //member functions/methods
    void getPercentage(){
        cout<<(cgpa*10)<<endl;
    }
};

int main(){
    Student student1;

    student1.name = "Mayank";
    student1.cgpa = 8.9;
    //this includes size of all fload, string , etc
    cout<<student1.name<<endl;
    cout<<student1.cgpa<<endl;
    student1.getPercentage();
}