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
        int n, x;
        cin>> n>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
        }
        int l=0, r=n-1;
        while(l<=r)
        {
            if(arr[l] == 1 && arr[r] == 1)
            {
                break;
            }
            if(arr[l] == 0)
            {
                l++;
            }
            if(arr[r] == 0)
            {
                r--;
            }
            
        }
        int length = r-l +1;
        if(length <= x)
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