#include<iostream>
using namespace std;

//start from top-right
void staircasesearch(int arr[][4],int n, int m, int key){
    int row = 0, col = m-1;
    while(row<n && col>=0){
        cout<<arr[row][col]<<endl;
        if(arr[row][col] == key){
            cout<<"FOUND AT: "<<row<<", "<<col;
            return;
        }
        else if(arr[row][col] > key){
            col--;
        }
        else if(arr[row][col] < key){
            row++;
        }
    }
    cout<<"NOT FOUND";
}

//start from down-left
void staircasesearchDL(int arr[][4],int n, int m, int key){
    int row = n-1, col = 0;
    while(row>=0 && col<m){
        cout<<arr[row][col]<<endl;
        if(arr[row][col] == key){
            cout<<"FOUND AT: "<<row<<", "<<col;
            return;
        }
        else if(arr[row][col] > key){
            row--;
        }
        else if(arr[row][col] < key){
            col++;
        }
    }
    cout<<"NOT FOUND";
}

int main(){
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    staircasesearchDL(arr,4,4,33);

    return 0;
}