#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> bbsort(vector<int> arr){
    int  n = arr.size();

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    return arr;
}

vector<int> inssort(vector<int> arr){
    int n = arr.size();

    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j-1], arr[j]);
            }
        }
    }
    return arr;
}

vector<int> ssort(vector<int> arr){
    int n = arr.size();

    for(int i=0; i<n-1; i++){
        int currmin = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[currmin]){
                currmin = j;
            }
        }
        if(currmin != i){
            swap(arr[i], arr[currmin]);
        }
    }

    return arr;
}

vector<int> countsort(vector<int> arr){
    int n = arr.size(), maxnum = INT32_MIN;
    
    for(int i=0; i<n; i++){
        maxnum = max(maxnum, arr[i]);
    }
    
    vector<int> count(maxnum+1, 0), ans;

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    for(int i=0; i<=maxnum; i++){
        while(count[i]>0){
            ans.push_back(i);
            count[i]--;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {2,4,10,5,6,8,7,5,3,1,9};
    vector<int> bubblesort, insertionsort, selectionsort, countingsort;

    bubblesort = bbsort(arr);
    print(bubblesort);

    insertionsort = inssort(arr);
    print(insertionsort);

    selectionsort = ssort(arr);
    print(selectionsort);

    countingsort = countsort(arr);
    print(countingsort);
    return 0;
}