#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    multiset<long long> ml;
    long long good_segs = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        /* code */
        ml.insert(arr[r]);
        long long mn = *ml.begin();
        long long mx = *ml.rbegin();

        if (mx - mn <= k)
        {
            good_segs += (r - l) + 1;
        }
        else
        {
            while (l <= r)
            {
                /* code */
                mn = *ml.begin();
                mx = *ml.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }
                ml.erase(ml.find(arr[l]));
                l++;
            }
            mn = *ml.begin();
            mx = *ml.rbegin();

            if (mx - mn <= k)
            {
                good_segs += (r - l) + 1;
            }
        }

        r++;
    }
    cout << good_segs;

    return 0;
}