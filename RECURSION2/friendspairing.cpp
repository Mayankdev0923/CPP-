#include<iostream>
using namespace std;

int friendspairing(int n){
    if(n == 0){
        return n;
    }
    if(n == 1 || n==2){
        return n;
    }

    int singlepair = friendspairing(n-1);
    int doublepair = (n-1)*friendspairing(n-2);
    return singlepair + doublepair;
}

int main(){
    int n;
    cout<<"Enter no. of friends : ";
    cin>>n;
    cout<<"No. of possible pairs : "<<friendspairing(n);
}