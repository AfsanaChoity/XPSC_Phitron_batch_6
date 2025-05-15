#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string str;
        cin >> str;
        multiset<int> digits;
        
        for (int i = 0; i < str.size(); i++)
        {
            int d = str[i] - '0';
            digits.insert(d);
        }

        vector<int> ans;

        for (int i = 1; i <= 10; i++)
        {

            int x = 10 - i;

            auto it = digits.lower_bound(x);
            
            if (it != digits.end())
            {

                ans.push_back(*it);
                digits.erase(it);
            }
            
        }
        
        for(auto val: ans)
        {
            cout<< val;
        }
        cout<< endl;
    }

    return 0;
}