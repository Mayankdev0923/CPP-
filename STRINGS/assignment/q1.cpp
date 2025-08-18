#include<iostream>
#include<string>
using namespace std;

int countlowercase(string str, int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(str.at(i)>='a' && str.at(i)<='z'){
            count++;
        }
    }
    return count;
}

int main(){
    string str1 = "My NmaE Is MAYAnk";
    int n = str1.length();
    cout<<countlowercase(str1,n);
}