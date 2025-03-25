#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>> a>> b;
    if(a>b)
        cout<< 0;
    else
    {
        int num_of_int = (b - a) + 1;
        cout<< num_of_int ;
    }

    return 0;
}