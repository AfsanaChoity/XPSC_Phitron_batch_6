#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum < s)
        {
            cout << -1 << endl;
            continue;
        }
        else if (sum == s)
        {
            cout << 0 << endl;
            continue;
        }
        int l = 0, r = 0;
        long long curr_sum = 0;
        int long_sub_array = -1;
        while (r < n)
        {
            curr_sum += arr[r];
            if (curr_sum == s)
            {
                long_sub_array = max(long_sub_array, r - l + 1);
            }

            while (curr_sum > s)
            {
                /* code */
                curr_sum -= arr[l];
                l++;
                if (curr_sum == s)
                {
                    long_sub_array = max(long_sub_array, r - l + 1);
                }
            }

            r++;
        }
        cout << n - long_sub_array << endl;
    }

    return 0;
}