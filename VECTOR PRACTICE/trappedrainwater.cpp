#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int trappedwater(vector<int> heights){
    int n = heights.size();
    int water = 0 ;

    vector<int> leftmax(n, 0), rightmax(n, 0);
    leftmax[0] = heights[0]; rightmax[n-1] = heights[n-1];

    for(int i=1; i<n; i++){
        leftmax[i] = max(leftmax[i-1], heights[i-1]);
    }

    for(int j=n-2; j>=0; j--){
        rightmax[j] = max(rightmax[j+1], heights[j+1]);
    }

    for(int i=0; i<n; i++){
        int pillar = min(leftmax[i], rightmax[i]);
        if(pillar - heights[i] > 0){
            water += pillar - heights[i];
        }
    }

    return water;
    
}

int main(){
    vector<int> heights = {4,2,0,6,3,2,5};

    cout<<trappedwater(heights);
}