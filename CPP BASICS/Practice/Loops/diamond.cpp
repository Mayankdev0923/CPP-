#include<iostream>
using namespace std;

int main() {
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<"  ";
        }
        for(int k=1; k<=(2*i-1); k++){
            cout<<"* ";
        }
        for(int l=1; l<=(n-i); l++){
            cout<<"  ";
        }
        cout<<endl;
    }    
    for(int m=n; m>=1; m--){
        for(int o=1; o<=(n-m); o++){
            cout<<"  ";
        }
        for(int p=1; p<=(2*m-1); p++){
            cout<<"* ";
        }
        for(int q=1; q<=(n-m); q++){
            cout<<"  ";
        }
        cout<<endl;
    }   
}