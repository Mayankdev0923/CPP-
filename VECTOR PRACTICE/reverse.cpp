#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(vector<int>& arr){
    int n = arr.size();
    int start=0,end=n-1;

    while(start<end){
        swap(arr[start++], arr[end--]);
    }
}

int main(){
    vector<int> arr;
    for(int i=1; i<=10; i++){
        arr.push_back(i);
    }

    print(arr);
    reverse(arr);
    print(arr);
}