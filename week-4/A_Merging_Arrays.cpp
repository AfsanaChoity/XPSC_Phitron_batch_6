#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<long> v1(n);
    vector<long> v2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int l = 0, r = 0;
    while (l < n && r < m)
    {
        if (v1[l] <= v2[r])
        {
            cout << v1[l] << " ";
            l++;
        }
        else
        {
            cout << v2[r] << " ";
            r++;
        }
    }

    while (l < n)
    {

        cout << v1[l] << " ";
        l++;
    }
    while (r < m)
    {

        cout << v2[r] << " ";
        r++;
    }

    return 0;
}