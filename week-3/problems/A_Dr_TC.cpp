#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        string str;
        cin>> str;
        int num_of_one = 0;
        for(int i=0; i<n; i++)
        {
            string s = str;
            if(s[i] == '0')
            {
                s[i] = '1';
            }
            else
            {
                s[i] = '0';
            }
            for(auto val : s)
            {
                if(val == '1')
                {
                    num_of_one++;
                }
            }
        }
        cout<< num_of_one<< endl;

    }
    
    return 0;
}