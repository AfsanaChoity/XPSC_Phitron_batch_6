#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q, customer=0;
    cin>> q;
    set<pair<int,int>> s;
    multiset<pair<int,int>> ml;
    vector<int> customer_order;
    while (q--)
    {
        /* code */
        int type;
        cin>> type;
        if(type == 1)
        {
            customer++;
            int money;
            cin>> money;
            s.insert({customer, money});
            ml.insert({money, -customer});

        }
        else if(type == 2)
        {
            //monocarp serves
            int pos = s.begin()->first;
            int money = s.begin()->second;
            customer_order.push_back(pos);
            s.erase(s.begin());
            ml.erase({money, -pos});

        }
        else{
            //polycarp serves
            int pos = -ml.rbegin()->second;
            int money = ml.rbegin()->first;
            customer_order.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos, money});
        }
    }

    for(int p : customer_order)
    {
        cout<< p << " ";
    }
    
    return 0;
}