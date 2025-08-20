#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {3,4,5};
    cout<<"size before : "<<vec.size()<<endl;
    cout<<"capacity before : "<<vec.capacity()<<endl<<endl;

    vec.push_back(1);
    cout<<"size before : "<<vec.size()<<endl;
    cout<<"capacity before : "<<vec.capacity()<<endl<<endl;

    vec.pop_back();
    cout<<"size before : "<<vec.size()<<endl;
    cout<<"capacity before : "<<vec.capacity()<<endl<<endl;
}