#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void removeduplicate(string str, string ans, int i, int map[]){
    if(i == str.length()){
        cout<<"ans : "<<ans;
        return;
    }

    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx]){
        removeduplicate(str, ans, i+1, map);
    }else{
        map[mapIdx] = true;
        ans+=str[i];
        removeduplicate(str, ans, i+1, map);
    }


}

int main(){
    cout<<"Enter word : ";
    string str;
    cin>>str;

    string ans = "";
    int map[26] = {false};

    removeduplicate(str, ans, 0, map);
}