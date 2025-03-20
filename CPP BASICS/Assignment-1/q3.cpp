#include<iostream>
using namespace std;

int main() {
    float P;
    float R;
    float T;

    cout<<"Enter the principle amount: ";
    cin>>P;

    cout<<"Enter the rate per annum: ";
    cin>>R;

    cout<<"Enter the time: ";
    cin>>T;

    float simple_interest = (P*R*T)/100;

    cout<<"The total interest calculated is: "<<simple_interest<<endl;
    return 0;
}