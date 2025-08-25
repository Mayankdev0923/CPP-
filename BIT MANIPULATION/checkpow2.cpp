#include<iostream>
using namespace std;

bool checkpow(int num){

    if(!(num&num-1)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;

    bool ispow = checkpow(num);
    if(ispow){
        cout<<"It is a power";
    }else{
        cout<<"Not a power";
    }
}