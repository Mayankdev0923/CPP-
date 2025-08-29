#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> vec, int target, int i){
    if(i == vec.size()){
        return -1;
    }
    if(vec[i] == target){
        return i;
    }

    return firstOccurence(vec, target, i+1);
}

int main(){
    vector<int> vec1 = {0,1,1,2,2,3,5,4,6};
    cout<<firstOccurence(vec1, 4,0);
}