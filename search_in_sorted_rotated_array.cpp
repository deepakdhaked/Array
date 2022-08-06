#include <iostream>
using namespace std;

int binarySearch(int *arr, int key, int start, int end)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int pivot(int *arr, int size)
{
    if (arr[0] < arr[size - 1])
    {
        return 0;
    }
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
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

int search(int *arr, int size, int key)
{
    int p = pivot(arr, size);

    if (key >= arr[p] && key <= arr[size - 1])
    {
        return binarySearch(arr, key, p, size - 1);
    }
    else
    {
        return binarySearch(arr, key, 0, p - 1);
    }
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

    int key;
    cin >> key;

    cout << "element is at location : " << search(arr, size, key);
}