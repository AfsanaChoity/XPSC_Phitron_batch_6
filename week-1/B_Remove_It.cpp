#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val == x)
            continue;
        else
            v.push_back(val);
    }

    for(int val : v)
    {
        cout<< val << " ";
    }
    return 0;
}