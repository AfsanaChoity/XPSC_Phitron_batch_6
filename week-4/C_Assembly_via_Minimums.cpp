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

        int m = (n*(n-1))/2;
        vector<long> b(m);
        
        for(int i=0; i<m;i++)
        {
            cin>> b[i];
        }
        sort(b.begin(), b.end());

        vector<long> a;
        for(int i=0, j=1; i<m;)
        {
            a.push_back(b[i]);
            i+= n-j;
            j++;
        }
        a.push_back(1000000000);
        for(auto x: a)
        {
            cout<< x<< " ";
        }
        cout<< endl;

    }
    
    return 0;
}