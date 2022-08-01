#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[], int size){
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        max = arr[i] > max ? arr[i] : max;
    }
    return max;
}

int getMin(int arr[], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        min = arr[i] < min ? arr[i] : min;
    }
    return min;
}

int main(){
    int arr[10000];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Max is : " << getMax(arr, size) << '\n';
    cout << "Min is : " << getMin(arr, size);
}