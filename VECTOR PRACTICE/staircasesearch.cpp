#include<iostream>
#include<vector>
using namespace std;

vector<int> stairsearch(vector<vector<int>> matrix,int target){
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> ans;

    int r=0, c=cols-1;
    while(c>=0 && r<=rows - 1 ){
        cout<<"("<<r<<", "<<c<<")"<<endl;
        if(matrix[r][c] == target){
            ans.push_back(r);
            ans.push_back(c);
            return ans;
        }
        else if(matrix[r][c] > target){
            c--;
        }
        else if(matrix[r][c] < target){
            r++;
        }
    }

    return ans;
} 

int main(){
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10,11,12},
                                  {13,14,15,16}};
    int target = 14;                              
    vector<int> index = stairsearch(matrix, target);
    if(index.size() != 0){
        cout<<"found at : "<<index[0]<<", "<<index[1];
    }else{
        cout<<"not found";
    }

}