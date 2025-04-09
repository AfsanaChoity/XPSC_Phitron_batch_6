#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>> testcase;

    while(testcase--)
    {
        int num_of_lilypads, pos_of_alice, pos_of_bob;
        cin>> num_of_lilypads>> pos_of_alice>>pos_of_bob;

        int difference = abs(pos_of_alice - pos_of_bob);
        if(difference% 2 == 0)
            cout<< "YES"<< endl;
        else
            cout<< "NO"<< endl;

    }
    return 0;
}