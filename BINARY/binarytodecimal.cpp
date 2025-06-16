#include<iostream>
using namespace std;

int btd(int n){
    int b = n;
    int power=1;
    int decimal=0;

    while(b>0){
        int rem = b%10;
        decimal += rem*power;
        power*=2;
        b/=10;
    }
    
    return decimal;
};

int main(){
    int n, decimal;
    cout<<"Enter binary number : ";
    cin>>n;
    decimal = btd(n);
    cout<<endl<<"Decimal Converted : "<<decimal;
}