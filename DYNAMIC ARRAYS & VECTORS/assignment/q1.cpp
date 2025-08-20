#include<iostream>
#include<vector>
using namespace std;

vector<int> missingduplicate(vector<int> vec){
    vector<int> ans;

    for(int i=0; i<vec.size(); i++){
        if(vec[i] != i+1){
            ans.push_back(vec[i]);
            ans.push_back(i+1);
            return ans;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,2,4};
    vector<int> ans = missingduplicate(nums);
    if(ans.size()>0){
        cout<<"["<<ans[0]<<" , "<<ans[1]<<"]";
    }else{
        cout<<"no such pair";
    }
}