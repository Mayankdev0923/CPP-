#include <iostream>
using namespace std;

//THIS STILL NEEDS OPTIMIZATION ACCORDING TO KADANE'S ALGO FOR O(N) T.C. FROM CURRENT O(N2)

void trappedrw(int *arr, int n)
{
    int trappedwater = 0;
    int left[n];
    int right[n];

    for (int i = 0; i < n; i++)
    {
        int leftmax = INT32_MIN;
        int rightmax = INT32_MIN;
        for (int j = 0; j < i; j++)
        {
            leftmax = max(leftmax, arr[j]);
        }
        for (int j = i + 1; j < n; j++)
        {
            rightmax = max(rightmax, arr[j]);
        }
        left[i] = leftmax;
        right[i] = rightmax;
    }

    for (int i = 0; i < n; i++)
    {
        int mintower = min(left[i], right[i]);
        if (mintower > arr[i]){
            trappedwater += mintower - arr[i];
        }
    }

    cout << "Trapped water : " << trappedwater;
}

int main()
{
    int arr[] = {5,0,0,3,0,0,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    trappedrw(arr, n);
    return 0;
}