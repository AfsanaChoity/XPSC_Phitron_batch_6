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
        int files, n, m;
        cin>> files>> n>> m;
        vector<int> mono(n), poly(m);
        for(int i=0; i<n; i++)
        {
            cin>> mono[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>> poly[i];
        }
        int idx1 = 0, idx2 = 0 , a=0;
        vector<int> ans;
        while (idx1 <n || idx2<m)
        {
            /* code */
            int flag = 0;
            while (idx1< n && mono[idx1] == 0)
            {
                /* code */
                flag = 1;
                ans.push_back(mono[idx1]);
                files++;
                idx1++;
            }
            while (idx2< m && poly[idx2] == 0)
            {
                /* code */
                flag = 1;
                ans.push_back(poly[idx2]);
                files++;
                idx2++;
            }
            while(idx1 <n && mono[idx1]> 0 && mono[idx1] <= files)
            {
                flag = 1;
                ans.push_back(mono[idx1]);
                idx1++;
            }
            while(idx2 <m && poly[idx2] > 0 && poly[idx2] <= files)
            {
                flag = 1;
                ans.push_back(poly[idx2]);
                idx2++;
            }
            if(flag == 0)
            {
                
                a = - 1;
                break;
            }
            

        }
        if(a == -1)
        {
            cout<< a<< endl;
        }
        else
        {
            for(int x : ans)
            {
                cout<< x<< " ";
            }
            cout<< endl;
        }
        
    }
    
    return 0;
}