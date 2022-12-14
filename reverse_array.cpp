#include<iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}

void reverseArr(int arr[], int size){
    int temp;

    for (int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void reverseArr2(int arr[], int size){
    int start = 0, end = size - 1;

    while (start<=end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main(){
    int arr[10000];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverseArr(arr, size);
    printArr(arr, size);

    cout << '\n';

    reverseArr2(arr, size);
    printArr(arr, size);
}
