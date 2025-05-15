#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long s;
    cin>> n>> s;

    vector<int> arr(n);
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin>> arr[i];
    }
    int ans = INT_MAX;
    int l=0, r=0;
    long long sum = 0;
    while (r<n)
    {
        /* code */
        sum += arr[r];
        while(sum >= s)
        {
            ans = min(ans, r-l+1);
            sum -= arr[l];
            l++;
            //cout<< ans<< endl;
        }
        
        r++;
        

    }
    if(ans == INT_MAX)
        cout<< -1;
    else    
        cout<< ans;
    
    
    return 0;
}