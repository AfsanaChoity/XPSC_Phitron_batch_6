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
        int n, k;
        cin>> n>>k;
        int ans = ((n-1) * k) +1;
        cout<< ans<< endl;
    }
    
    return 0;
}