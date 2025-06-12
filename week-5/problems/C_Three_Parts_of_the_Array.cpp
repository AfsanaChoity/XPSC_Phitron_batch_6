#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    long long l=0, r= n-1, ans=0;
    long long  sum1 = 0, sum3 = 0;
    while (l<=r)
    {
        /* code */

        if(sum1 < sum3)
        {
            sum1 += arr[l];
            l++;
            
        }
        else
        {
            sum3 += arr[r];
            r--;
            
        }
        if(sum1 == sum3)
        {
            ans = sum1;
            
        }
    }
    cout<< ans;
    
    return 0;
}