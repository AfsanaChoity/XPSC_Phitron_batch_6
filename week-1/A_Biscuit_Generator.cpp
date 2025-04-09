#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin>> a>>b>> t;
    float total_time = t + 0.5;
    int max_bis = 0;
    for(int i = 1; i*a <= total_time; i++)
    {
        max_bis = max_bis + b;
    }
    cout<< max_bis;
    return 0;
}