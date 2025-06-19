#include<iostream>
using namespace std;

//Time Complexity is : log(n)
int binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    while(start<=end){
        int med=(start+end)/2;
        if(arr[med] == key){
            return med;
        }
        else if (arr[med]>key)
        {
            end = med-1;
        }
        else{
            start =med+1;
        }
        
    }
    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key=2;

    int index = binarysearch(arr,n,key);

    if(index>=0){
        cout<<endl<<"Element found at : "<<index;
    }
    else{
        cout<<endl<<"Not Found";
    }
}