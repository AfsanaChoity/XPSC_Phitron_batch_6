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
        cin>>n;
        vector<int> s(n);
        for(int i=0; i<n;i++)
        {
            cin>> s[i];
        }
        bool flag = true;
        for(int i=0; i<n;i++)
        {
            if(s[i] <= 4)
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO\n";
        }
    }
    
    return 0;
}