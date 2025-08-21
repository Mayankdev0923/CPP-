#include<iostream>
#include<vector>
using namespace std;

void spiraltraverse(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    int rstr=0, rend=rows-1, cstr=0, cend=cols-1;

    while(cstr<=cend && rstr <=rend){
        for(int i=cstr; i<cend; i++){
            cout<<matrix[rstr][i]<<", ";
        }

        for(int i=rstr; i<=rend; i++){
            cout<<matrix[i][cend]<<", ";
        }

        for(int i=cend-1; i>=cstr; i--){
            cout<<matrix[rend][i]<<", ";
        }

        for(int i=rend-1; i>rstr; i--){
            cout<<matrix[i][cstr]<<", ";
        }

        cstr++; rstr++;
        cend--; rend--;
    }
}

int main(){
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10,11,12},
                                  {13,14,15,16}};
    spiraltraverse(matrix);
}