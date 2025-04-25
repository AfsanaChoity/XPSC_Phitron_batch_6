#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        multiset<int> bananas;
        bananas.insert(a);
        bananas.insert(b);
        bananas.insert(c);
        for(int i=0; i<5;i++)
        {
            
            int mn = *bananas.begin();
            mn++;
            bananas.erase(bananas.begin());
            bananas.insert(mn);
            //cout<< mn << endl;
        }
        int max_banana = 1;
        for(auto banana : bananas)
        {
            max_banana *= banana;
        }

        cout << max_banana << endl;
    }
    return 0;
}