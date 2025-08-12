#include<iostream>
using namespace std;

void print_max_subarr_sum(int arr[], int n){
    int max = INT32_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++ ){
            //main subarray printing function
            int sum = 0;
            cout<<"(";
            for(int i=start; i<=end;i++){
                cout<<arr[i];
                sum+=arr[i];
            }
            cout<<" : "<<sum<<") ";
            if (max < sum)
            {
                max = sum;
            }
            
        }
        cout<<endl;

    }
    cout<<"Max Sum : "<<max<<endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_max_subarr_sum(arr,n);
    return 0;
}