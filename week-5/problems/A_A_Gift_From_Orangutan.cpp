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
        vector<int> v(n);
        int min_num = INT_MAX, max_num = INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin>> v[i];
            if(v[i] < min_num)
            {
                min_num = v[i];
            }
            if(v[i] > max_num)
            {
                max_num = v[i];
            }
        }
        int max_score=0;
        int diff = max_num - min_num;
        for(int i=1; i<n; i++)
        {
            max_score += diff;
        }
        cout<< max_score<< endl;

    }
    
    return 0;
}