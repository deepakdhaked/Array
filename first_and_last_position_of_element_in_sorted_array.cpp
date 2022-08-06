#include<iostream>
using namespace std;

int firstOccurance(int *arr, int size, int key){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start<=end)
    {
        if (key==arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key>arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurance(int *arr, int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
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

    int first = firstOccurance(arr, size, key);
    int last = lastOccurance(arr, size, key);

    cout << "first index : " << first << '\n';
    cout << "last index : " << last;
}