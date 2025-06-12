#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    if (k == 0)
    {
        cout << 0;
        return 0;
    }
    int l = 0, r = 0;
    map<int, int> cnt;
    long long good_segs = 0;
    while (r < n)
    {
        
        cnt[arr[r]]++;

        while (cnt.size() > k)
        {
            cnt[arr[l]]--;
            if (cnt[arr[l]] == 0)
            {
                cnt.erase(arr[l]);
            }
            l++;
            
        }
        good_segs += (r - l + 1);
        r++;
    }
    
    cout<< good_segs;

    return 0;
}