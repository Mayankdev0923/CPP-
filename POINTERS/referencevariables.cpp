#include<iostream>
using namespace std;

int main(){

    int a=90;
    //creating a reference variable(alias)
    int &alias = a;
    cout<<alias<<endl;

    //modify alias
    alias+=10;

    //check original value
    cout<<a<<endl;
    
}