#include<iostream>
using namespace std;

int tilingprob(int n){
    if(n == 0 || n==1){
        return 1;
    }

    //vertical placement of tile
    int solution_1 = tilingprob(n-1);

    //horizontal placement of tile
    int solution_2 = tilingprob(n-2);

    return solution_1 + solution_2;
}

int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<"possible ways for fitting 2x"<<n<<" tiles : "<<tilingprob(n);
}