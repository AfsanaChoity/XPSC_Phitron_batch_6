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
        vector<int> arr(n);
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
            ans = ans ^ arr[i];
        }
        
        if(n %2 != 0)
        {
            cout<< ans<<endl;
        }
        else
        {
            if(ans == 0)
            {
                cout<< ans<<endl;
            }
            else
            {
                cout<< -1<< endl;
            }
        }
    }
    
    return 0;
}