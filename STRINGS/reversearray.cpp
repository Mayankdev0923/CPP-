#include<iostream>
#include<cstring>
using namespace std;

void reverse(char* str, int n){
    int start = 0, end = n-1;
    while(start<end){
        swap(str[start++], str[end--]);
    }
}

int main(){
    char str[] = "mayank";
    int n = strlen(str);

    cout<<str<<endl;
    reverse(str, n);
    cout<<str<<endl;
}