#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n;
        cin>> n;
        priority_queue<int> pq;
        long long max_power =0;
        for(int i=0; i<n; i++)
        {
            int card;
            cin>> card;
            if(card > 0)
            {
                pq.push(card);
            }
            else if(card == 0)
            {
                if(!pq.empty())
                {
                    max_power += pq.top();
                    pq.pop();
                }
            }
        }
        cout<< max_power<< endl;
    }
    
    return 0;
}