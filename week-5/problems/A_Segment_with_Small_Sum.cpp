#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, s;
    cin>> n>> s;
    vector<int> arr(n);
    for (size_t i = 0; i <n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int l = 0, r=0;
    long long sum = 0;
    int ans = 0;
    while (r<n)
    {
        /* code */
        sum += arr[r];
        if(sum <= s)
        {
            ans = max(ans, r-l+1);
        }
        else
        {
            sum -= arr[l];
            l++;

        }
        r++;
        
    }
    cout<< ans;
    
    return 0;
}