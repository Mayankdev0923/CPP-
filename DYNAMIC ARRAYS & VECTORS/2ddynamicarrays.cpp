#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Rows : ";
    cin>>rows;

    cout<<"Cols : ";
    cin>>cols;

    int ** matrix = new int*[rows];

    for(int i=0; i<rows; i++){
        //this store the column array pointer address at row index
        matrix[i] = new int[cols];
    }

    //now traversing the matrix for input
    int x=0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i][j] = x++;
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    //deallocating now
    for(int i=0; i<rows; i++){
        delete [] matrix[i];
    }

    //delete final matrix
    delete [] matrix;
}