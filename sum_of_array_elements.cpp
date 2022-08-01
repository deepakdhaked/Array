#include<iostream>
using namespace std;

int sumArr(int arr[], unsigned int size){
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main(){
    int arr[10000];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of array elements is : " << sumArr(arr, size);
}