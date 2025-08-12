#include<iostream>
using namespace std;

void print_sub_arr(int arr[], int n){
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++ ){
            //main subarray printing function
            cout<<"(";
            for(int i=start; i<=end;i++){
                cout<<arr[i];
            }
            cout<<") ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_sub_arr(arr,n);
    return 0;
}