#include<iostream>
using namespace std;

bool findunq(int *arr, int n){
    int uniques[n];
    int index = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<index; j++){
            if(arr[i] == uniques[j]){
                return true;
            }
            
        }

        uniques[index] = arr[i];
        index++;
    }

    return false;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 4;

    bool res = findunq(arr,n);
    if(res){
        cout<<"totally not unique";
    }
    else{
        cout<<"type shi";
    }
    return 0;
}