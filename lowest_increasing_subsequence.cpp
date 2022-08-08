#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Time Complexity : O(N*N)
int lis(vector<int> &v)
{
    int s = v.size();
    vector<int> dp(s, -1);
    dp[0] = 1;
    int ans = 0;

    for (int i = 0; i < s; i++)
    {
        int max = 0;
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i])
            {
                if (dp[j] > max)
                {
                    max = dp[j];
                }
            }
        }
        dp[i] = max + 1;
        if (dp[i] > ans)
        {
            ans = dp[i];
        }
    }
    return ans;
}

// Time Complexity : O(Nlog(N))
int lisOptimized(vector<int> v)
{
    vector<int> temp;
    temp.push_back(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > temp.back())
        {
            temp.push_back(v[i]);
        }
        else
        {
            auto loc = lower_bound(temp.begin(), temp.end(), v[i]) - temp.begin();
            temp[loc] = v[i];
        }
    }
    return temp.size();
}

int main()
{
    vector<int> v = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << lisOptimized(v);
}