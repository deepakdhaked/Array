#include<iostream>
using namespace std;

long long findsqrtInt(int n){
    int start = 0, end = n;
    long long mid = start + (end - start) / 2;
    long long ans = -1;
    while (start <= end)
    {
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double findsqrtfloat(int n, int precision){
    int temp = findsqrtInt(n);
    double ans = temp;
    double factor = 1;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    
    return ans;
}

int main(){

    cout << "sqrt of "
         << " is : " << findsqrtfloat(3, 3) << endl;
}