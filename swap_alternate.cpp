#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}

void swapAlt(int arr[], int size)
{
    int first = 0, second = 1;

    while (second<size)
    {
        swap(arr[first], arr[second]);
        first += 2;
        second += 2;
    }
}

void swapAlt2(int arr[], int size){
    for (int i = 0; i < size-1; i+=2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

void swapAlt3(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if(i+1<size){
            swap(arr[i], arr[i + 1]);
        }
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

    printArr(arr, size);

    cout << "\nSwap 1 : ";

    swapAlt(arr, size);
    printArr(arr, size);

    cout << "\nSwap 2 : ";

    swapAlt2(arr, size);
    printArr(arr, size);

    cout << "\nSwap 3 : ";

    swapAlt3(arr, size);
    printArr(arr, size);
}