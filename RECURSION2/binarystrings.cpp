#include<iostream>
using namespace std;

void binarystrings(string ans, int lastbit, int n, int i){
    if(i==n){
        cout<<ans<<endl;
        return;
    }
    if(lastbit == 0){
        binarystrings(ans+"0", 0, n, i+1);
        binarystrings(ans+"1", 1, n, i+1);
    }
    if (lastbit == 1)
    {
        binarystrings(ans+"0", 0, n, i+1);
    }
    
}

int main(){
    cout<<"Enter the size of binary string : ";
    int n;
    cin>>n;
    string ans;

    cout<<"Possible strings : \n";
    binarystrings(ans, 0, n, 0);
}