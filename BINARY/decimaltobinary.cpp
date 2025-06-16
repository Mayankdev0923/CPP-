#include<iostream>
using namespace std;

int dtb(int d){
    int binary=0;
    int power=1;
    while(d>0){
        int rem=d%2;
        binary += rem*power;
        power*=10;
        d/=2;
    }
    return binary;
};

int main(){
    int n, binary;
    cout<<"Enter decimal number : ";
    cin>>n;
    binary = dtb(n);
    cout<<endl<<"Binary converted : "<<binary;
}