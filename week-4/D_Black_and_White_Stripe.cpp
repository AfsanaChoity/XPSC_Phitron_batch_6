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
        string str;
        cin >> str;
        int l = 0, r = 0;

        vector<int> ans;
        int steps = 0;
        while (r < n)
        {
            /* code */
            if ((r - l)+1 == k)
            {

                if (str[r] == 'W')
                {
                    steps++;
                }
                //cout<< steps<< " ";
                ans.push_back(steps);
                l++, r++;
                
                if(str[l-1] == 'W')
                {
                    steps--;
                }
            }
            else
            {
                if (str[r] == 'W')
                {
                    steps++;
                }

                r++;
            }
        }
        

        int min_steps = *min_element(ans.begin(), ans.end());
        cout << min_steps << endl;
    }

    return 0;
}