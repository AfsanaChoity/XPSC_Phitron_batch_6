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
        int n, coins;
        cin>> n>> coins;
        vector<int> v;
        for(int i=1; i<=n; i++)
        {
            int c;
            cin>> c;
            v.push_back(c+i);
        }
        sort(v.begin(), v.end());

        int teleport1 = 0;
        for(auto x : v)
        {
            
            if(x <= coins)
            {
                teleport1++;
                coins -= x;
            }
        }

        
        cout<< teleport1<< endl;

    }
    
    return 0;
}