#include<iostream>
using namespace std;

class Complex{
    public:
    int Real, Imaginary;

    Complex(int Real , int Imaginary){
        this->Real = Real;        
        this->Imaginary = Imaginary;        
    }

    void Print(){
        string sign = (this->Imaginary>0)?" + ":" ";
        cout<<"Resultant number : ( "<<this->Real<<sign<<this->Imaginary<<"i )"<<endl;
    }

    Complex operator - (Complex &num) {
        int resultReal, resultImaginary;

        resultReal = this->Real - num.Real;
        resultImaginary = this->Imaginary - num.Imaginary;

        Complex result(resultReal, resultImaginary);
        return result;
    }
};

int main(){
    Complex c1(3,2);
    Complex c2(2,9);
    Complex c3 = c1 - c2;
    c3.Print();
}