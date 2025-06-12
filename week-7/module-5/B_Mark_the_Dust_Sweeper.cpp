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
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
        }
        int idx = 0;
        while(idx<n-1)
        {
            if(arr[idx] != 0)
            {
                break;
            }
            idx++;
        }
        if(idx == n-1)
        {
            cout<< 0<< endl;
            continue;
        }
        
        long long ans =0;
        for(int i= idx; i<n-1; i++)
        {
            if(arr[i] == 0)
            {
                ans ++;
            }
            else
            {
                ans += arr[i];
            }
        }
        cout<< ans<<endl;

    }

    return 0;
}