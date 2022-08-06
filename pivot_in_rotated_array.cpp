#include <iostream>
using namespace std;

int pivot(int *arr, int size)
{
    if(arr[0]<arr[size-1]){
        return 0;
    }
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid]>=arr[0])
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

    cout << "pivot element is at location : " << pivot(arr, size);
}