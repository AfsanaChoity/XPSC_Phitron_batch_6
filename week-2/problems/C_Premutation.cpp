#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;           //number of testcase
    cin>> t;
    
    //loop through each testcase
    while(t--)
    {
        int n;
        cin>> n;
        
        vector<vector<int>> v(n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
                {
                    int x;
                    cin>> x;
                    v[i].push_back(x);
                    
                }
        }

        
        vector<int> freq(n+1, 0);
        for(int i=0; i<n; i++)
        {
            freq[v[i][0]]++;
            
        }

        int missing_int;
        for(int i=1; i<=n; i++)
        {
            if(freq[i] > 1)
            {
                missing_int = i;
                break;
            }
            
        }
        cout<< missing_int << " ";
        for(int i=0; i<n; i++)
        {
            if(v[i][0] != missing_int)
            {
                for(int j=0; j<n-1; j++)
                {
                    cout<< v[i][j]<< " ";
                    
                }
                break;
            }
            
        }
        cout<< endl;

    }

    return 0;
}