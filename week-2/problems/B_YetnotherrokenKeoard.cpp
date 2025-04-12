#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test; // number of testcases
    cin >> test;
    while (test--)
    {
        /* code */
        string str;
        cin >> str;
        vector<pair<int, char>> upper_case;
        vector<pair<int, char>> lower_case;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'b')
            {
                if (lower_case.empty())
                {
                    continue;
                }
                else
                {
                    lower_case.pop_back();
                }
            }
            else if (str[i] == 'B')
            {
                if (upper_case.empty())
                {
                    continue;
                }
                else
                {
                    upper_case.pop_back();
                }
            }
            else
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    upper_case.push_back({i, str[i]});
                }
                else
                {
                    lower_case.push_back({i, str[i]});
                }
            }
        }

        if (upper_case.empty() && !lower_case.empty())
        {
            for (auto ch : lower_case)
            {
                cout << ch.second;
            }
        }
        else if (!upper_case.empty() && lower_case.empty())
        {
            for (auto ch : upper_case)
            {
                cout << ch.second;
            }
        }
        else if (!upper_case.empty() && !lower_case.empty())
        {
            if (upper_case.size() < lower_case.size())
            {
                lower_case.insert(lower_case.end(), upper_case.begin(), upper_case.end());
                sort(lower_case.begin(), lower_case.end());
                for (auto ch : lower_case)
                {
                    cout << ch.second;
                }
            }
            else
            {
                upper_case.insert(upper_case.end(), lower_case.begin(), lower_case.end());
                sort(upper_case.begin(), upper_case.end());
                for (auto ch : upper_case)
                {
                    cout << ch.second;
                }
            }
        }

        cout << endl;
    }

    return 0;
}