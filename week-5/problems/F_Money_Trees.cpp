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
        int n, k;
        cin >> n >> k;
        vector<int> fruits(n), height(n);
        for (int &x : fruits)
        {
            cin >> x;
        }
        for (int &x : height)
        {
            cin >> x;
        }

        
        int l = 0, r = 0;
        int long_sub_array = 0;
        long long sum = fruits[r];

        while (r < n - 1)
        {
            /* code */

            if (height[r] % height[r + 1] == 0)
            {
                // sum += fruits[r];
                sum += fruits[r + 1];
                if (sum <= k)
                {
                    long_sub_array = max(long_sub_array, r - l + 2);
                }
                while (sum > k)
                {
                    sum -= fruits[l];
                    l++;

                    if (sum <= k)
                    {
                        long_sub_array = max(long_sub_array, r - l + 2);
                    }
                }

                r++;
                // cout << long_sub_array << endl;
            }
            else
            {
                r++;
                l = r;
                if(r < n)
                    sum = fruits[r];
            }
        }
        if(long_sub_array == 0)
        {
            for(int i=0; i<n; i++)
            {
                if(fruits[i] <= k)
                {
                    long_sub_array = 1;
                    break;
                }
            }
        }
        cout << long_sub_array << endl;
    }

    return 0;
}