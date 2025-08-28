#include<iostream>
using namespace std;

class Idiot{
    private: 
        string secret = " Mayank's Khoofiyaa Jaankari hehe"; 
        
    friend class Dost;
    friend void iShowSecret(Idiot &e);
};

class Dost : public Idiot{
    public:
        void showsecret(){
            cout<<this->secret<<endl;
        }
};

// class Dushman : public Idiot{
//     public:
//         void showsecret(){
//             cout<<this->secret; //this'll give error as not friend
//         }
// };

void iShowSecret(Idiot &e){
    cout<<e.secret<<endl;
}

int main(){
    Idiot Mayank;
    Dost ronit;
    ronit.showsecret();

    iShowSecret(Mayank);

}