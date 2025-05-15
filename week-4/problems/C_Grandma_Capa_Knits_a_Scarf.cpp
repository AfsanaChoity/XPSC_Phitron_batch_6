#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int mn = INT_MAX;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = INT_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int l = 0, r = n - 1;
            int deleted_letter = 0;
            bool flag = true;
            while (l < r)
            {
                if (str[l] == str[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if (str[l] == ch)
                    {
                        deleted_letter++;
                        l++;
                    }
                    else if (str[r] == ch)
                    {
                        deleted_letter++;
                        r--;
                    }
                    else 
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag)
            {
                ans = min(ans, deleted_letter);
            }
        }
        if (ans < INT_MAX)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}