#include<iostream>
using namespace std;

int clearBitSequence(int num, int start, int end){
    int zeroes = end-start+1;
    int afterones = start;

    int bitmask = ~0<<zeroes;
    bitmask = (~bitmask)<<start;
    bitmask = ~bitmask;

    int result = bitmask & num;

    return result;
}

//better logic
void clearBitsInRange(int num, int i, int j) {
    int a = (~0) << (j + 1);   // 111..111000... (zeroed out bits 0..j)
    int b = (1 << i) - 1;      // 000...000111.. (set bits 0..i-1)

    int mask = a | b;          // keeps bits above j and below i
    num = num & mask;          // clears bits in range [i, j]

    cout << num << endl;
}

int main(){
    int num, start,end;
    cout<<"Enter your number : ";
    cin>>num;

    cout<<"Enter starting index : ";
    cin>>start;

    cout<<"Enter ending index : ";
    cin>>end;

    int updatedno = clearBitSequence(num, start, end);

    cout<<"After change : "<<updatedno;
}