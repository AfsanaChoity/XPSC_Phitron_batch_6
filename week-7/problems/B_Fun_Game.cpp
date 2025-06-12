#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;
        if (str1 == str2)
        {
            cout << "YES\n";
            // continue;
        }
        else
        {
            int pos = -1;

            for (size_t i = 0; i < n; i++)
            {
                /* code */
                if (str1[i] == '1')
                {
                    pos = i;
                    break;
                }
            }
            if(pos == -1)
            {
                cout<< "NO\n";
            }

            else
            {
                bool flag = true;
                for (size_t i = 0; i < n; i++)
                {
                    /* code */
                    if (str1[i] != str2[i])
                    {

                        if (i < pos)
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if (flag)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
           
        }
    }

    return 0;
}