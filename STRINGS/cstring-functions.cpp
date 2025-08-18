#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[] = "hello ";
    char str2[] = "fellow";
    char str3[50];

    strcpy(str3,str1);
    cout<<str3<<endl;

    cout<<strcmp(str1,str2)<<endl;

    strcat(str1,str2);
    cout<<str1<<endl;

    return 0;
}