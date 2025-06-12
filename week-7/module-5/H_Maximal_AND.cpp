#include<bits/stdc++.h>
using namespace std;
const int B = 30;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n, operations;
        cin>> n>>operations;
        vector<long long> arr(n);
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            cin>> arr[i];
        }

        vector<int> bits(B+1);
        for (int i = 0; i < n; i++)
        {
           
            for (int k = B; k >= 0; k--)
            {
               
                if((arr[i] >> k) & 1)
                {
                    bits[k]++;
                }
                
            }
        
        }

        int ans = 0;
        for (int j = B;  j>=0; j--)
        {
            /* code */
            if(bits[j] == n)
            {
                ans += (1LL << j);
            }
            else
            {
                int need = n - bits[j];
                if(operations >= need)
                {
                    ans+= (1LL << j);
                    operations -= need;
                }
            }
        }
        
        //int AND = arr[0];
        //int AND = (1LL << 31) - 1;
        cout<< ans<< endl;
        

    }
    
    return 0;
}