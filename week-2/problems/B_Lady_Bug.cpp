#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;

    
    while (testcase--)
    {
        
        int n; 
        cin >> n;
        string str_a, str_b;
        cin >> str_a;
        cin >> str_b;

        int num_of_even_idx_1 = 0;
        int num_of_odd_idx_1 = 0;
        for (int i = 0; i < str_a.size(); i++)
        {
            if (i % 2 == 0 && str_a[i] == '1')
                num_of_even_idx_1++;
            else if (i % 2 != 0 && str_a[i] == '1')
                num_of_odd_idx_1++;
        }
        
        int num_of_even_idx_0 = 0;
        int num_of_odd_idx_0 = 0;
        for (int i = 0; i < str_b.size(); i++)
        {
            if (i % 2 == 0 && str_b[i] == '0')
                num_of_even_idx_0++;
            else if (i % 2 != 0 && str_b[i] == '0')
                num_of_odd_idx_0++;
        }
        
        
        if (num_of_even_idx_0 >= num_of_odd_idx_1 && num_of_odd_idx_0>= num_of_even_idx_1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}