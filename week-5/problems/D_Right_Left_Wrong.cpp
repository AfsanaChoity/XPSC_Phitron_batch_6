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
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        string str;
        cin >> str;
        vector<long long> prefix_arr(n);
        prefix_arr[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            /* code */
            prefix_arr[i] = arr[i] + prefix_arr[i - 1];
        }
        long long sum = 0;
        int left =0, right =n-1;

        // if (n % 2 == 0)
        // {
        //     right = n / 2;
        //     left = right - 1;
        // }
        // else
        // {
        //     right = (n + 1) / 2;
        //     left = right - 1;
        // }

        while (left < right)
        {
            /* code */

            if (str[left] == 'L' && str[right] == 'R')
            {
                if (left > 0)
                    sum += prefix_arr[right] - prefix_arr[left - 1];
                else if (left == 0)
                {
                    sum += prefix_arr[right];
                }
                //cout << "L = " << left << " & R = " << right << " S = " << sum << endl;
                left++;
                right--;
            }
            if (str[left] != 'L' )
            {
                left++;
            }
            if (str[right] != 'R' )
            {
                right--;
            }
            // cout<< sum<< endl;
        }
       
        
        cout << sum << endl;
    }

    return 0;
}