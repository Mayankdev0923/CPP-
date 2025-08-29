#include<iostream>
using namespace std;

int getSum(int n){
    if(n == 1){
        return 1;
    }

    return n + getSum(n-1);
}

int main(){
    cout<<getSum(5);
}