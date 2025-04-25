#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int num_of_gold = 0, num_of_zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

        }
        int people=0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == 0 && num_of_gold > 0)
            {
                people++;
                num_of_gold--;
            }
            else if(v[i]>= k)
            {
                num_of_gold += v[i];
            }

        }
        

        
        cout << people << endl;
    }
    return 0;
}