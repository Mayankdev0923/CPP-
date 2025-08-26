#include<iostream>
using namespace std;

class Student{
    string name;
    float cgpa;

public:
    //setter
    void setname(string value){
        name = value;
    }

    void setcgpa(float value){
        cgpa = value;
    }
    
    //getter
    string getname(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;
    s1.setname("Mayank");
    cout<<s1.getname()<<endl;

    s1.setcgpa(6.6);
    cout<<s1.getcgpa()<<endl;
}