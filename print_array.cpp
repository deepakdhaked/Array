#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
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

    printArr(arr,size);
}