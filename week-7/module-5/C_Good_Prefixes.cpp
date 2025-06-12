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
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
        }
        int l =0, r=1;
        
        
        long long sum = arr[0], good_prefix = 0;
        if(arr[0] == 0)
        {
            good_prefix++;
        }
        int mx = arr[0];
        while (r<n)
        {
            /* code */
            sum += arr[r];
            mx = max(mx, arr[r]);

            long long tmp_sum = sum - mx;
            if(tmp_sum == mx)
            {
                good_prefix++;
            }
            
            r++;
        }
        cout<< good_prefix<< endl;
        
    }
    
    return 0;
}