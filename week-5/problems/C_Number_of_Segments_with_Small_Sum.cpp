#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, s;
    cin >> n >> s;
    vector<int> arr(n);
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int l = 0, r = 0;
    long long sum = 0;
    long long good_segments = 0;

    while (r < n)
    {
        /* code */
        sum += arr[r];
        if (sum <= s)
        {
            
            good_segments += (r - l + 1);
        }
        else
        {
            while (sum > s && l <= r)
            {
                sum -= arr[l];
                l++;
            }
            if (sum <= s)
            {
                good_segments += (r - l + 1);
            }
        }

        r++;
    }
    cout << good_segments;

    return 0;
}