#include<iostream>
using namespace std;

class User{
    int id;
    string password;

public:
    string username;
    
    User(int idValue, string usernameValue){
        id = idValue;
        username = usernameValue;
    }

    void setPassword(string passValue){
        password = passValue;
    }

    void getPassword(){
        cout<<password<<endl;
    }
};

int main(){
    User u1(1234, "Mayank");
    u1.setPassword("Noam");
    u1.getPassword();
}