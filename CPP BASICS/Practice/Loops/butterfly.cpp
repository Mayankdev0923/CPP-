#include<iostream>
using namespace std;

int main(){
    int n=4;
    //upper wings
    for(int i=1; i<=n; i++){
        //first star upper wing
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        //spaces
        for(int k=1; k<=2*(n-i); k++){
            cout<<"  ";
        }
        //second star upperwing(same as first hence copied)
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //lower wings
    for(int i=n; i>=1; i--){
        //first star lower wing(same as upper wing)
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        //spaces(same as upper wing)
        for(int k=1; k<=2*(n-i); k++){
            cout<<"  ";
        }
        //second star lower wing(same as first lowerwing hence copied)
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}