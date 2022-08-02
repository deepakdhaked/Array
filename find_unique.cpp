// Link ---- https: // www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0

#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        temp = temp ^ arr[i];
    }
    return temp;
}

int main(){
    int arr[1000];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << findUnique(arr, size);
}