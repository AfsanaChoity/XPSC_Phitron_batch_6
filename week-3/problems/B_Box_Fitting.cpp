#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mx_weight;
        cin >> n >> mx_weight;
        multiset<int, greater<int>> weights;
        for (int i = 0; i < n; i++)
        {
            int w;
            cin >> w;
            weights.insert(w);
        }
        int min_height = 1;
        

        int total_weight = mx_weight;
        while (!weights.empty())
        {
            /* code */
            auto it = weights.lower_bound(total_weight);
            if( it != weights.end())
            {
                total_weight -= *it;
                weights.erase(it);
                
            }
            else
            {
                min_height++;
                total_weight = mx_weight;
            }

        }
        
        

        cout << min_height << endl;
        //cout<< endl;
    }
    return 0;
}