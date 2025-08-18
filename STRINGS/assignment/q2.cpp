#include<iostream>
#include<string>
using namespace std;

bool anagram(string str1, string str2){
    int n = str1.length();
    int m = str2.length();

    if(n!=m){
        return false;
    }

    //initialize count array
    int count[26] = {0};

    //filling count array
    for(int i=0; i<n; i++){
        count[str1[i]-'a']++;
    }

    //emptying with check
    for(int i=0; i<n; i++){
        if(count[str2[i] - 'a'] == 0){
            return false;
        }
        else{
            count[str2[i] - 'a']--;
        }
    }

    return true;

}

void oneswap(string str1, string str2){
    //anagram check
    if(!anagram(str1, str2)){
        cout<<"NOT POSSIBLE as not anagrams";
        return;
    }

    //counting non positioned numbers
    int count=0;
    for(int i=0; i<str1.length(); i++){
        if(str1.at(i) != str2.at(i)){
            count++;
        }
    }

    if(count>2){
        cout<<"NOT POSSIBLE SWAP B/W anagrams";
    }
    else{
        cout<<"swap possible to make identical";
    }
}

int main(){
    string str1 = "anagram";
    string str2 = "nagram";

    oneswap(str1, str2);
}