#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n, s, m;
        cin>>n>>s>>m;
        vector<pair<int,int>> intervals(n);
        for(int i=0; i<n; i++)
        {
            int x, y;
            cin>>x>>y;
            intervals[i] = {x,y};

        }
        int time = intervals[0].first - 0;
        if(time >= s)
        {
            cout<< "Yes\n";
            continue;
        }
        time = m - intervals[n-1].second;
        if(time >= s)
        {
            cout<< "Yes\n";
            continue;
        }
        bool bath = false;
        for(int i=0; i<n-1; i++)
        {
            if(abs(intervals[i].second - intervals[i+1].first) >= s)
            {
                bath = true;
                break;
            }

        }
        if(bath)
        {
            cout<< "Yes\n";
        }
        else
        {
            cout<< "No\n";
        }

    }
    
    return 0;
}