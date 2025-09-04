#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int start, int end, int target){
    int mid = (start + end)/2;
    
    if(start>end){
        return -1;
    }

    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] > target){
        return binarySearch(arr, start, mid-1, target);
    }
    if(arr[mid] < target){
        return binarySearch(arr, mid+1, end, target);
    }

}

int main(){
    vector<int> arr = {0,1,2,3,4,4,6};
    cout<<"Index : "<<binarySearch(arr, 0, arr.size(), 5);
}