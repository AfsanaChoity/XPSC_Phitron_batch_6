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
        int n,m;
        cin>>n>>m;
        if(n== m)
        {
            
            cout<<"Yes\n";
        }
        else if(n>m)
        {
            int rem = n-m;
            if(rem%2 ==0)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<< "No\n";
            }
        }
        else
        {
            cout<< "No\n";
        }
    }
    
    return 0;
}