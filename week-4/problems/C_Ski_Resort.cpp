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
        long long days, min_days, max_temp;
        cin>> days>> min_days>> max_temp;

        vector<long long> temperatures;
        for(int i=0; i<days; i++)
        {
            long long x;
            cin>> x;
            if(x<= max_temp)
            {
                temperatures.push_back(1);
            }
            else
            {
                temperatures.push_back(0);
            }
        }
        
        
        
        long long l =0;
        long long ans = 0;
        long long ones = 0;
        while(l<days)
        {
           
            if(temperatures[l] == 1)
            {
                ones++;
            }
            else if(temperatures[l] == 0)
            {
                //cout<< ans<< " " << ones << endl;
                if(ones >= min_days)
                    ans += ((ones - min_days + 1) * (ones - min_days + 2))/2;

                ones = 0;
            }
            l++;
        }
        if(ones >= min_days)
            ans += ((ones - min_days + 1) * (ones - min_days + 2))/2;

        
        cout<< ans<< endl;
        //cout<< endl;
    }
    
    return 0;
}