#include<iostream>
#include<cstring>
using namespace std;

void palindrome(char* str, int n){
    int start = 0, end = n-1;
    while(start<end){
        if(str[start++]!=str[end--]){
            cout<<str<<": NOT PALINDROME";
            return;
        }

    }

    cout<<str<<" : PALINDROME";
}

int main(){
    char str[] = "racar";
    int n = strlen(str);

    palindrome(str, n);
}