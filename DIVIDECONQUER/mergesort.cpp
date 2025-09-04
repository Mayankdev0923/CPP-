#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(vector<int>& arr, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;

    vector<int> ans;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        ans.push_back(arr[i]);
        i++;
    }
    while (j <= end) {
        ans.push_back(arr[j]);
        j++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        arr[start + i] = ans[i];
    }
}

void mergeSort(vector<int>& arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end-start)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
    
        merge(arr, start, mid, end);
    }

}

int main()
{
    vector<int> arr = {6, 3, 7, 5, 2, 4};
    mergeSort(arr, 0, arr.size() - 1);

    print(arr);
}