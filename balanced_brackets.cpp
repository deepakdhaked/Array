#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};
bool isBalanced(string s)
{
    stack<char> st;
    for (char brackets : s)
    {
        if (symbols[brackets] < 0)
        {
            st.push(brackets);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[brackets] != 0)
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    string s = "()[]{}";
    cout << isBalanced(s);
}