#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s , t;
    cin>> s>> t;

    int cnt = 0;

    // int a =0, b=0, c=0;
    // while((a+b+c) <= s && (a*b*c) <= t)
    // {

    // }

    for(int i=0;i<= 100;i++)
    {
        for(int j=0; j<= 100 ;j++)
        {
            for(int k=0; k<= 100 ;k++)
            {
                if((i+j+k) <= s && (i*j*k) <= t)
                {
                    cnt++;
                }
            }
        }
    }
    cout<< cnt;

    return 0;
    
}