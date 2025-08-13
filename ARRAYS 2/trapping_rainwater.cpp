//THIS IS A LIMITED SOLUTION: IT HAS LIMITS, IT IS NOT PREFFERED
//IT FAILS TO FIND RIGHT ANSWER FOR {5,0,0,3,0,0,4}

#include<iostream>
using namespace std;

void trappedrw(int *arr, int n){
    int maxtrappedcapacity = 0;

    int pillars[n/2];
    int pillindex = 0;
    if(arr[0]>arr[1]){
        pillars[pillindex] = 0;
        pillindex++;
    }
    for (int i=1; i<n-1; i++)
    {
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            pillars[pillindex] = i;
            pillindex++;
        }
    }
    
    if(arr[n-1]>arr[n-2]){
        pillars[pillindex]=n-1;
        pillindex++;
    }

    for(int i=0; i<pillindex-1; i++){
        int sum =0 ;
        if(arr[pillars[i]]>arr[pillars[i+1]]){
            for(int j=pillars[i]+1; j<pillars[i+1]; j++){
                sum+= (arr[pillars[i+1]] - arr[j]);
            }
        }
        if(arr[pillars[i]]<arr[pillars[i+1]]){
            for(int j=pillars[i]+1; j<pillars[i+1]; j++){
                sum+= (arr[pillars[i]] - arr[j]);
            }
        }
        maxtrappedcapacity+= sum;
        cout<<sum<<"\t";
    }

    cout<<endl<<"Max trapped Capacity : "<<maxtrappedcapacity;
}

int main(){
    int arr[] = {4,2,0,6,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    trappedrw(arr,n);
    return 0;
}