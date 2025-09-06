#include<iostream>
#include<vector>
using namespace std;

int lastOccurence(vector<int> vec, int target, int i){
    if(i == vec.size()){
        return -1;
    }
    if(vec[vec.size()-i-1] == target){
        return vec.size()-i-1;
    }

    return lastOccurence(vec, target, i+1);
}

int lo(vector<int> arr, int target, int n){
    if(n==-1 || arr[n] == target){
        return n;
    }

    return lo(arr, target, n-1);
}

int main(){
    vector<int> v1 = {0,3,4,5,66,2,5,1,66,-1};
    cout<<lastOccurence(v1, 66, 0);
    cout<<endl<<lo(v1, 66, v1.size()-1);
}