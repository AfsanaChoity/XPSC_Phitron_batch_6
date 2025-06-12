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
        int n,k;
        cin>> n>>k;
        vector<int> arr(n);
        map<int, int> cnt;
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
            cnt[arr[i]]++;
        }
        sort(arr.begin(), arr.end());

        int L = -1, R= -1;
        int l = -1, r;

        for(int i=0; i<n; i++)
        {
            if(cnt[arr[i]] < k)
            {
                continue;
            }
            if(l==-1)
            {
                l = arr[i];
            }
            if(i == n-1 || arr[i+1] - arr[i] > 1 || cnt[arr[i+1]] < k)
            {
                r = arr[i];
                if(r-l >= R-L)
                {
                    L = l;
                    R=r;
                }
                l = -1, r=-1;
            }
        }
        if(L == -1)
        {
            cout<< -1 << endl;
        }
        else
        {
            cout<< L << " "<< R<< endl;
        }

    }
    
    return 0;
}