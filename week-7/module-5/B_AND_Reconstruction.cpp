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
        vector<int> b(n+10);
        b[0] = 0;
        b[n] = 0;
        for(int i=1; i<n; i++)
        {
            cin>> b[i];
        }
        vector<int> a(n+10);
        for(int i=1; i<=n; i++)
        {
            a[i] = b[i-1] | b[i];
        }
        bool flag = true;
        for(int i=1; i<=n; i++)
        {
            if((a[i] & a[i+1]) != b[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        for(int i=1; i<=n; i++)
        {
            cout<< a[i]<< " ";
        }
        else
        {
            cout<< -1 ;
        }
        cout<< endl;
    }
    
    return 0;
}