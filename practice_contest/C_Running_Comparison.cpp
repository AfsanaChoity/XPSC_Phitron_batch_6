#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int days;
        cin>> days;

        int happy=0;
        vector<int> alice(days), bob(days);
        for(int i=0; i<days; i++)
        {
            cin>> alice[i];
            
        }
        for(int i=0; i<days; i++)
        {
            cin>> bob[i];
            
        }

        for(int i=0; i<days; i++)
        {
            
            int mn = min(alice[i], bob[i]);
            int mx = max(alice[i], bob[i]);
            //cout<< mn << " & "<< mx << endl;
            if(mx <= 2*mn)
            {
                happy++;
            }
        }
        cout<< happy<< endl;
    }
    
    return 0;
}