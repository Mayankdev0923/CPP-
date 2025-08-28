#include<iostream>
using namespace std;

class BankAccount{
    private:
        int accountNumber;
        int balance = 0;
    
    public:

        void deposit(int amount){
            this->balance += amount;
            cout<<"Deposited : "<<amount<<endl;
        }   

        void withdraw(int amount){
            if(amount<=balance){
                this->balance -= amount;
                cout<<"Withdrawn : "<<amount<<endl;
            }
            else{
                cout<<"Not sufficient balance for this transaction.\n";
            }
        }    

        void getBalance(){
            cout<<"Current Balance : "<<this->balance<<endl;
        }

        BankAccount(int accountNumber){
            this->accountNumber = accountNumber;
        }
};

int main(){
    BankAccount acc1(101);
    acc1.getBalance();

    acc1.deposit(50000);
    acc1.getBalance();

    acc1.withdraw(2345);
    acc1.getBalance();
}