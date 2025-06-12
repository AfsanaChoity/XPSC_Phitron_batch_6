#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, m;
        cin >> n >> m;
        if ((n % 2 == 0 && m % 2 != 0) || m<n)
        {
            cout << "No\n";
            // continue;
        }
        else
        {

            int sum = 0;
                vector<int> arr(n);
                if (n % 2 == 0 && m % 2 == 0)
                {
                    for (int i = 0; i < n - 2; i++)
                    {
                        arr[i] = 1;
                        sum++;
                    }
                    arr[n - 2] = (m - sum) / 2;
                    arr[n - 1] = arr[n - 2];
                }
                else if (n % 2 != 0 && m % 2 != 0)
                {
                    for (int i = 0; i < n - 1; i++)
                    {
                        arr[i] = 1;
                        sum++;
                    }
                    arr[n - 1] = m - sum;
                }
                else if (n % 2 != 0 && m % 2 == 0)
                {
                    for (int i = 0; i < n - 1; i++)
                    {
                        arr[i] = 1;
                        sum++;
                    }
                    arr[n - 1] = m - sum;
                }
                cout << "Yes\n";
                for (auto x : arr)
                {
                    cout << x << " ";
                }
                cout << endl;
        }
    }

    return 0;
}