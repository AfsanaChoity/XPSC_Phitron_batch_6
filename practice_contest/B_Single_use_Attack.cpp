#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int h, x, y;
        cin>> h>> x>> y;
        int num_of_attacks = 1;
        h = h- y;
        if(h % x == 0)
        {
            num_of_attacks += h/x;
        }
        else if(h % x != 0)
        {
            num_of_attacks += (h/x) + 1;
        }
        cout<< num_of_attacks<< endl;
    }
    
    return 0;
}