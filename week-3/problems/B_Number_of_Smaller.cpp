#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v_n(n);
    vector<int> v_m(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v_n[i];
        
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> v_m[i];
       
    }


    int l=0, r=0, cnt=0;
    while (r<m)
    {
        /* code */
       
        if(l<n && v_n[l]< v_m[r])
        {
            cnt++;
            l++;
        }
        else
        {
            cout<< cnt<< " ";
            r++;
        }
    }
    

    return 0;
}