#include<iostream>
using namespace std;

int main() {
    float pencil;
    float pen;
    float eraser;

    cout<<"Enter the price of pencil: ";
    cin>>pencil;

    cout<<"Enter the price of pen: ";
    cin>>pen;

    cout<<"Enter the price of eraser: ";
    cin>>eraser;

    float total = pen + pencil + eraser;
    float total_with_gst = 1.18 * total;

    cout<<"The total price is :"<<total<<endl;
    cout<<"The total price with gst is :"<<total_with_gst<<endl;

    return 0;
}