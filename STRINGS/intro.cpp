#include<iostream>
#include<cstring>
#include<limits>
using namespace std;

int main(){
    char str[] = {'c','o','d','e','\0'}; //this is a string
    char charray[] = {'c','o','d','e'}; //this is a character array
    "hello everynyan"; //this is a string literal

    cout<<str<<endl; //pointer to string/char-array will print the complete array/string
    cout<<strlen(str)<<endl;//outputs length of string

    //input one word
    char word[50];
    cin>>word;
    cout<<"Your word was : "<<word<<endl;
    cout<<"lemgth : "<<strlen(word)<<endl<<endl;

    //input complete sentence
    char sentence[100];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');// this ignores as many character as possible until the delimiter cam i.e, '\n'
    cin.getline(sentence, 100);
    cout<<"Your word was : "<<sentence<<endl;
    cout<<"lemgth : "<<strlen(sentence)<<endl;


}