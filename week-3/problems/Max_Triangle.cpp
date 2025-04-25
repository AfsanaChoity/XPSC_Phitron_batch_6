#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        if(n<4)
        {
            cout<< -1<< endl;
        }
        else
        {
            long long p = n;
            for(int i=0; i<2; i++)
            {
                p += --n;
            }
            cout<< p<< endl;
        }
    }
    return 0;
}