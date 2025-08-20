#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> pairsum(vector<int> vec, int target){
    sort(vec.begin(), vec.end());
    vector<int> pair;

    int start = 0, end = vec.size()-1;

    while(start<end){
        int sum = vec[start] + vec[end];
        if(target == sum){
            pair.push_back(vec[start]);
            pair.push_back(vec[end]);
            return pair;
        }
        else if(target < sum){
            end--;
        }
        else if(target > sum){
            start++;
        }
    }

    return pair;

}

int main(){
    vector<int> vec = {2,5,9,7,11,3};

    vector<int> pair = pairsum(vec, 1);
    if(pair.size()!=0){
        cout<<"["<<pair[0]<<" , "<<pair[1]<<"]";
    }else{
        cout<<"no such pair";
    }
}