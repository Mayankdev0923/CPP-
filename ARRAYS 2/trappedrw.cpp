#include <iostream>
using namespace std;

void trappedrw(int *arr, int n)
{
    int trappedrw = 0;
    int leftmax[n];
    int rightmax[n];
    leftmax[0] = 0;
    rightmax[n - 1] = 0;

    for (int i = 1; i < n; i++)
    {
        leftmax[i] = max(leftmax[i-1], arr[i - 1]);
    }
    for (int j = n - 2; j >= 0; j--)
    {
        rightmax[j] = max(arr[j + 1], rightmax[j + 1]);
    }

    for(int k=0; k<n; k++){
        int minval = (min(leftmax[k],rightmax[k]) - arr[k]);
        if(minval>0){
            trappedrw+=minval;
        }
    }

    cout<<"Maximum Trapped Rainwater : "<<trappedrw;

}

int main()
{
    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    trappedrw(arr, n);
    return 0;
}