#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int num_of_station, query;
        cin>> num_of_station>> query;
        map<int, set<int>> mp;
        for(int i=1; i<=num_of_station; i++)
        {
            int x;
            cin>> x;
            mp[x].insert(i);
        }
        for(int i=0; i<query; i++)
        {
            int src, des;
            cin>> src>>des;
            if((mp.find(src) == mp.end()) || (mp.find(des) == mp.end()))
            {
                cout<< "NO"<< endl;
            }
            else
            {
                int left, right;
                left = *mp[src].begin();
                right = *mp[des].rbegin();
                if(left< right)
                {
                    cout<< "YES"<< endl;
                }
                else
                {
                    cout<< "NO" << endl;
                }
            }
        }
    }
    return 0;
}