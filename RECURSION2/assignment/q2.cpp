#include<iostream>
#include<vector>
using namespace std;

void occurencefinder(vector<int> arr, int key){
    int n = arr.size() - 1;

    if(arr.size()){
        if(arr[n] == key){
            cout<<n<<" ";
        }
        arr.pop_back();
        occurencefinder(arr, key);
    }

    return;
}

int main(){
    vector<int> arr = {3,2,4,5,6,2,7,2,2};
    int key = 2;
    occurencefinder(arr, key);
}