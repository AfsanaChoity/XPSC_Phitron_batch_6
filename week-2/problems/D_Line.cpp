#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; // number of testcases
    cin >> t;

    while (t--)
    {
        long long n; // the length of the line.
        cin >> n;

        string str;
        cin >> str;

        long long current_total = 0;
        long long first_idx = 0, last_idx = n - 1;
        for (long long i = 0; i < n; i++)
        {
            if (str[i] == 'L')
            {
                current_total += abs(first_idx - i);
            }
            else if (str[i] == 'R')
            {
                current_total += abs(last_idx - i);
            }
        }

        long long left = 0, right = n - 1;
        vector<long long> values;
        while (left <= right)
        {
            if (str[left] == 'L')
            {
                long long left_cng = current_total - (left - first_idx) + (last_idx - left);
                current_total = max(current_total, left_cng);
                values.push_back(current_total);
            }
            if (str[right] == 'R')
            {
                long long right_cng = current_total - (last_idx - right) + (right - first_idx);
                current_total = max(current_total, right_cng);
                values.push_back(current_total);
            }
            left++;
            right--;
        }
        if (!values.empty())
        {
            for (auto val : values)
            {
                cout << val << " ";
            }
            for (int i = values.size(); i < n; i++)
            {
                cout << values.back() << " ";
            }
        }
        else{
            for(int i=0; i<n; i++)
            {
                cout<< current_total<< " ";
            }
            
        }

        cout << endl;
    }
    return 0;
}