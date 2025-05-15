#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int cells, teachers, query;
        cin>> cells>> teachers>> query;
        vector<int> teacher_pos(teachers);
        for(int i=0; i<teachers; i++)
        {
            cin>> teacher_pos[i];
        }
        sort(teacher_pos.begin(), teacher_pos.end());
        while (query--)
        {
            /* code */
            int devid_pos;
            cin>> devid_pos;
            if(devid_pos < teacher_pos[0])
            {
                cout<< teacher_pos[0] - 1<< endl;
                continue;
            }
            else if(devid_pos > teacher_pos[teachers-1])
            {
                cout<< cells - teacher_pos[teachers-1]<< endl;
                continue;
            }
            else
            {
                auto it = lower_bound(teacher_pos.begin(), teacher_pos.end(), devid_pos);
                auto it2 = it;
                --it2;
                int left = *it2;
                int right = *it;
                int mid = (left+right)/2;
                int ans = min(abs(left-mid), abs(right-mid));
                cout<< ans<< endl;
                
            }

        }
        
    }
    
    return 0;
}