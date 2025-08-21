#include<iostream>
#include<vector>
using namespace std;

int diagonalsum(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    if(rows!=cols){
        cout<<"NOT POSSIBLE TO FIND DIAGONAL SUM";
        return 0;
    }

    int sum=0;

    for(int i=0; i<rows; i++){
        sum+=matrix[i][i];
        if(rows-i-1 != i){
            sum+=matrix[i][rows-i-1];
        }
    }

    return sum;
}

int main(){
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10,11,12},
                                  {13,14,15,16}};
    cout<<diagonalsum(matrix);
}