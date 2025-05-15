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
        int number_of_doll;
        cin >> number_of_doll;
        //vector<int> dolls(number_of_doll);
        map<int, int> cnt;
        set<int> s;
        for (int i = 0; i < number_of_doll; i++)
        {
            int size_of_doll;
            cin >> size_of_doll;
            cnt[size_of_doll]++;

            s.insert(size_of_doll);
            s.insert(size_of_doll+1);
        }

        
        int num_of_set = 0;
        int last = 0;
        for(auto x : s)
        {
            int c = cnt[x];
            num_of_set += max(0, c-last);
            last = c;
        }
       
        cout<< num_of_set << endl;
    }

    return 0;
}