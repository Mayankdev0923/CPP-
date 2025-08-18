#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hemilo";
    cout<<str<<endl;

    //can be size increased
    str = "hellllllo";
    cout<<str<<endl;

    //input using getline(cin, dest, delimiter)
    getline(cin,str);

    cout<<str<<endl;
    
}