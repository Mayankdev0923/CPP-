#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;    
};

class Student : public Person{
    private:
        string studentID;

    public:
        void displayStudentInfo(){
            cout<<"Student name : "<<this->name<<endl;
            cout<<"Student age : "<<this->age<<endl;
            cout<<"Student ID : "<<this->studentID<<endl;
        }
        
        //constryctor
        Student(string name, int age, string studentID){
            this->name = name;
            this->age = age;
            this->studentID = studentID;
            cout<<"Student record created\n";
        }
};

int main(){
    Student s1("Alice", 20, "S12345");
    s1.displayStudentInfo();
}