#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "yellowmellow";

    //prints length
    cout<<str.length()<<endl;

    //prints value at index
    cout<<str.at(6)<<endl;

    //prints subarray of size from an index 
    cout<<str.substr(3,5)<<endl;

    //finds substring and returns index
    //also, str.find(word, startfrom index)
    cout<<str.find("w", 6)<<endl;

    //returns -1 or unsigned value (which is -1 but in char)
    int idx = str.find("alabatross");
    cout<<idx;
}