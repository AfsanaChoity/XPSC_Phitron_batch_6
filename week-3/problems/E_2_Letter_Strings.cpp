#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<string> str(n);
        map<char, int> start, end;
        map<string, int> word_cnt;

        for (int i = 0; i < n; i++)
        {
            cin>> str[i];
        }
        
        long long num_of_pairs = 0;

        for (int i = 0; i < n; i++)
        {
            num_of_pairs += start[str[i][0]] + end[str[i][1]] - 2 * word_cnt[str[i]];
            start[str[i][0]]++;
            end[str[i][1]]++;
            word_cnt[str[i]]++;
        }
        
        cout<< num_of_pairs<< endl;
    }

    return 0;
}