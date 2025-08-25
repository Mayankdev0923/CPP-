#include<iostream>
using namespace std;

int main(){
    int x=6,i=0;
    cout<<"Enter i : ";
    cin>>i;

    int num = 1<<i;
    if((x&num) == 0){
        cout<<i<<"th bit : 0"<<endl;
    }else{
        cout<<i<<"th bit : 1"<<endl;
    }
}