#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int stockprofit(vector<int> arr){
    int n = arr.size();
    int maxprofit = 0;
    vector<int> bestbuy(n, 0);
    bestbuy[0] = INT_MAX;

    for(int i=1; i<n; i++){
        bestbuy[i] = min(bestbuy[i-1], arr[i-1]);
    }

    for(int i=0; i<n; i++){
        maxprofit = max(maxprofit, arr[i]-bestbuy[i]);
    }

    return maxprofit;
}

int main(){
    vector<int> arr = {2,4,10,5,6,8,7,5,3,1,9};
    cout<<stockprofit(arr);
}