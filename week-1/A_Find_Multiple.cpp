#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>> a>> b>> c;
    
    
    for(int i = 1; c*i <= b; i++)
    {
        int prod = c*i;
        if(prod >= a && prod <= b)
        {
            cout<< prod;
            return 0;
        }

    }
    cout<< -1;

    return 0;
}