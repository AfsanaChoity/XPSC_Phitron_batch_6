#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        set<string> bi;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            bi.insert(str);
        }

        // for(auto it : bi)
        // {
        //    cout<< it<< " ";
        // }

        string temp = "";
        for (int i = 0; i < k; i++)
        {
            temp.push_back('0');
        }
        bool flag = true;
        for (int j = k - 1; j >= 0; j--)
        {
            temp[j] = '1';
            if (bi.find(temp) == bi.end())
            {
                flag = false;
                break;
            }
            temp[j] = '0';
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout<< "NO\n";
        }
    }
}
