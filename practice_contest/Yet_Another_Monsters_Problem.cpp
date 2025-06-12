#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        vector<long long> h(n);

        for (int i = 0; i < n; i++)
        {

            cin >> h[i];
        }

        sort(h.begin(), h.end());

        vector<long long> a;

        a.push_back(0);

        for (int i = 0; i < n; i++)
        {

            if (i == 0 || h[i] != h[i - 1])
            {

                a.push_back(h[i]);
            }
        }

        long long res = LLONG_MAX;

        int i = 0;

        for (long long x : a)
        {

            while (i < n && h[i] <= x)
            {

                i++;
            }

            long long cnt = n - i;

            long long time = x + cnt;

            if (time < res)
            {

                res = time;
            }
        }

        cout << res << endl;
    }

    return 0;
}