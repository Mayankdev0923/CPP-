#include<iostream>
#include<cstring>
using namespace std;

//hard to read otherwise same
void uppercase(char* string){
    int n = strlen(string);

    for(int i=0; i<n; i++){
        if((int)string[i]<=122 && (int)string[i]>=97){
            int alphabetposition = (int)string[i] - 97;
            string[i] = (char)(65 + alphabetposition);
        }
    }
}

//easy to read
void toupper(char* string){
    int n = strlen(string);

    for(int i=0; i<n; i++){
        char ch = string[i];

        if(ch>='a' && ch<='z'){
            string[i] = (ch -'a') + 'A';
        }
    }
}

int main(){
    char sentence[200];

    cout<<"enter string : ";
    cin.getline(sentence, 200);

    toupper(sentence);
    cout<<sentence;
}