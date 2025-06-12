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
        float x, y;
        cin >> x >> y;
        int need_scr = 0;

        if (y != 0)
        {
            need_scr = ceil(y / 2);
            int total_sq = 15 * need_scr;
            int rem_sq = total_sq - (4 * y);
            if (rem_sq >= x)
            {
                cout << need_scr << endl;
            }
            else
            {
                int rem_need_sq = x - rem_sq;
                // need_scr += ceil(rem_need_sq / 15);
                if (rem_need_sq % 15 == 0)
                {
                    need_scr += (rem_need_sq / 15);
                }
                else
                {
                    need_scr += ((rem_need_sq / 15) + 1);
                }
                cout << need_scr << endl;
            }
        }
        else
        {
            need_scr = ceil(x / 15.0);
            cout << need_scr << endl;
        }
    }

    return 0;
}