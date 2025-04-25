#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;

    while (t--)
    {
        /* code */
        long long n;
        cin>> n;
        if(n<=3)
            cout<< 1<< endl;
        else
        {
            long long q = n/4;
            long long cnt = 2;

            while (q > 3)
            {
                /* code */
                q = q/4;
                cnt *= 2;

            }
            
            cout<<cnt<< endl;
        }
    }
    
    return 0;
}