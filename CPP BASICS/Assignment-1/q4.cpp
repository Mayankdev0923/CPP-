#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    float radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    float area = PI*radius*radius;

    cout<<"The area of the given circle is: "<<area<<endl;
    return 0;
}