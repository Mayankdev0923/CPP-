#include<iostream>
#include<vector>
using namespace std;

int kadanesum(vector<int> arr){
    int n =arr.size();
    int maxsum = INT32_MIN;
    int currsum = 0;

    for(int i=0; i<n; i++){
        
        currsum+=arr[i];
        maxsum = max(maxsum, currsum);
        if(currsum<0){
            currsum=0;
        }
    }

    return maxsum;
    
}

int main(){
    vector<int> arr = {2,4,-10,5,6,8,7,5,3,1,9};

    cout<<kadanesum(arr);
}