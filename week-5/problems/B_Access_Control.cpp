#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n, x;
        cin>>n>>x;
        string str;
        cin>> str;
        //cout<<str[0]<<endl;
        if(str[0] == '0')
        {
            cout<< "NO"<<endl;
        }
        else
        {
            bool flag = true;
            int r;
            for(int i=0; i<n; i++)
            {
                if(str[i] == '1')
                {
                     r = x;
                }
                else if(str[i] == '0')
                {
                    r--;
                }
                //cout<< r<< endl;
                if(r<0)
                {
                    flag = false;
                    break;
                }

            }
            if(flag)
                cout<< "YES\n";
            else
                cout<< "NO\n";

        }
    }
    
    return 0;
}