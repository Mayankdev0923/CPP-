#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int linearsearch(vector<int> arr, int target){
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int binarysearch(vector<int> arr, int target){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    
    int start = 0, end = n-1;

    while(start<end){
        int mid = (start + end)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,5,6,7,8,9,10};
    int target = 6;

    cout<<"Index after linear search : "<<linearsearch(arr, target)<<endl;
    cout<<"Index after linear search : "<<binarysearch(arr, target)<<endl;
}