#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        map<int,int> cnt_num;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>> x;
            cnt_num[x]++;
        }
        priority_queue<int> counts;
        for(auto[val, cnt]: cnt_num)
        {
            counts.push(cnt);
        }
       
        while (!counts.empty())
        {
            /* code */
            if(counts.size() < 2)
            {
                break;
            }
            int x = counts.top();
            counts.pop();
            int y = counts.top();
            counts.pop();
            x --;
            y --;
            if(x>0)
                counts.push(x);
            if(y > 0)
                counts.push(y);

        }
        int min_size = 0;
        while (!counts.empty())
        {
            /* code */
            min_size += counts.top();
            counts.pop();
        }

        cout<< min_size<< endl;
        
    }
    return 0;
}