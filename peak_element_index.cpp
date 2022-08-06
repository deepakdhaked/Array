#include<iostream>
using namespace std;

int peak(int *arr, int size){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start<end)
    {
        if (arr[mid]<arr[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[10000];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "peak element is at location : " << peak(arr, size);
}