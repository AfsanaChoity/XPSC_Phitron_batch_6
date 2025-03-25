#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;

    if(n < 10)
    {
        cout<< "000"+to_string(n);
        return 0;
    }
    else if(n < 100)
    {
        cout<< "00"+to_string(n);
        return 0;
    }
    else if(n < 1000)
    {
        cout<< "0"+to_string(n);
        return 0;
    }
    else if(n<10000)
    {
        cout<< to_string(n);
    }
    return 0;
}