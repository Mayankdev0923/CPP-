#include<iostream>
#include<string>
using namespace std;

void anagram(string str1, string str2){
    int n = str1.length();
    int m = str2.length();

    if(n!=m){
        cout<<"NOT ANAGRAMS";
        return;
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
            cout<<"NOT ANAGRAMS";
            return;
        }
        else{
            count[str2[i] - 'a']--;
        }
    }

    cout<<"VALID ANAGRAM";
    return;

}

int main(){
    string str1 = "anagram";
    string str2 = "nagaram";

    anagram(str1, str2);
}