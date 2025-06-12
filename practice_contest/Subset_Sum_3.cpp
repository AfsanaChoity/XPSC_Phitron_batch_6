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
        vector<int> nums(n);
        int cnt_zero = 0, cnt_one = 0, cnt_two = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            int r = nums[i] % 3;
            if (r == 0)
            {
                cnt_zero++;
            }
            else if (r == 1)
            {
                cnt_one++;
            }
            else
            {
                cnt_two++;
            }
        }

        if (cnt_zero > 0)
            cout << "Yes\n";

        else if (cnt_one > 0 && cnt_two > 0)
            cout << "Yes\n";

        else if (cnt_one >= 3)
            cout << "Yes\n";

        else if (cnt_two >= 3)
            cout << "Yes\n";

        else
            cout << "No\n";
    }
    return 0;
}