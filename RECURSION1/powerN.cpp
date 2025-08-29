#include<iostream>
using namespace std;

//O(n) complexity
int power(int x, int n){
    if(n==0){
        return 1;
    }

    return x*power(x,n-1);
}

//O(logn) complexity
int pow(int x, int n){
    if(n==0){
        return 1;
    }

    if(n%2 == 0){
        return pow(x,n/2) * pow(x,n/2);
    }
    if(n%2 != 0){
        return x * pow(x,n/2) * pow(x,n/2);
    }
}

int main(){
    cout<<pow(2,3);
}