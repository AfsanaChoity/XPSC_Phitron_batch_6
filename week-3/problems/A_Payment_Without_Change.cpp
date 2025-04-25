#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;
    while(t--)
    {
        long long a, b, n, s;
        cin>> a>>b>>n>>s;

        long long x = (a*n) + b;
        if(x == s )
        {
            cout<< "YES\n";

        }
        else if(x < s)
        {
            cout<< "NO\n";
        }
        else
        {
            long long reminder = s%n;
            if(reminder<= b)
            {
                cout<< "YES\n";
            }
            else
            {
                cout<< "NO\n";
            }
        }
    }
    return 0;
}