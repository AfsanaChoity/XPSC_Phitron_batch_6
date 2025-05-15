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
        string str;
        cin>> str;
        int zero=0, one=0;
        if(str[0] == '0')
        {
            zero++;
        }
        else if(str[0] == '1')
        {
            one++;
        }
        for(int i=1; i<n; i++)
        {
            if(str[i] == '0' && str[i-1] == '0')
            {
                continue;
            }
            else if(str[i]== '1')
            {
                one++;
            }
            else if(str[i] == '0' && str[i-1] == '1')
            {
                zero++;
            }

        }
        if(one> zero)
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