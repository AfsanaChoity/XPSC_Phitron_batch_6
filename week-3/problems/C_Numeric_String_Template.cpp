#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            string str;
            cin >> str;

            if (n != str.size())
            {
                cout << "NO\n";
            }
            else
            {

                map<char, int> mp;
                map<int, char> mp2;
                bool flag = true;
                for (int j = 0; j < n; j++)
                {
                    
                    if (mp.count(str[j]) == 0) 
                    {
                        mp[str[j]] = v[j];
                        
                        
                    }
                    if(mp2.count(v[j]) == 0)
                    {
                        mp2[v[j]] = str[j];
                        
                    }
                    
                    if((mp.count(str[j]) != 0 && v[j] != mp[str[j]]) || (mp.count(str[j]) != 0 && mp2[v[j]] != str[j]))
                    {
                        flag = false;
                        break;
                    }
                    
                }
                

                if (flag)
                {
                     cout<< "YES\n";
                }
                else
                {
                    cout<< "NO\n";
                }
            }
        }
    }
    return 0;
}


