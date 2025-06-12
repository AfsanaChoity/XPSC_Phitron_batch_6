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
        int n;
        cin>> n;
        vector<int> weights(n);
        for(int i=0; i<n; i++)
        {
            cin>> weights[i];
        }
        sort(weights.begin(), weights.end());
        int max_team = 0;
        for(int s = 2; s<=  n*2; s++)
        {
            int l =0, r= n-1, teams = 0;

            while (l<r)
            {
                /* code */
                if(weights[l] + weights[r] == s)
                {
                    teams++;
                    l++;
                    r--;
                }
                else if(weights[l] + weights[r] > s)
                {
                    r--;
                }
                else if(weights[l] + weights[r] < s)
                {
                    l++;
                }

            }
            max_team = max(max_team, teams);
            
        }
        cout<< max_team<< endl;
    }
    
    return 0;
}