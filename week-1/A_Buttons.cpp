#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>> a>> b;
    int first_button,second_button;
    if(a>b)
    {
        first_button = a;
        if(a-1 > b)
            second_button = a-1;
        
        else
            second_button = b;
    }
    else
    {
        first_button = b;
        if(b-1 > a)
            second_button = b-1;
        
        else
            second_button = a;
    }

    cout<< first_button + second_button;

    return 0;
}