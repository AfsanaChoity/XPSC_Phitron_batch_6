#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n;
        cin>> n;
        string str;
        cin>> str;

        map<char, int> cnt;
        for(int i=0; i< str.size(); i++)
        {
            if(str[i] == '?')
            {
                continue;
            }
            else
            {
                cnt[str[i]]++;
            }
        }
        long long score= 0;
        for(auto it: cnt)
        {
            if(it.second >= n)
            {
                score += n;
            }
            else 
            {
                score += it.second;
            }
        }
        cout<< score<< endl;
    }
    
    return 0;
}