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
        vector<long> v;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                continue;

            else
            {
                v.push_back(x);
                if (x < 0)
                {
                    sum += abs(x);
                }
                else
                    sum += x;
            }
        }

        long long min_steps = 0;
        
        for (int i=0;i < v.size(); i++)
        {
            /* code */
            if(v[i] < 0 && i == 0)
            {
                min_steps++;
                
            }
            else if(v[i] < 0 && v[i-1]> 0)
            {
                min_steps++;
            }
            
            
        }

        
        cout << sum << " " << min_steps << endl;
    }

    return 0;
}