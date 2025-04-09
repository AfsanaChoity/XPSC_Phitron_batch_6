#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t ;         //number of testcases
    cin>> t;

    // loop through for each testcase
    while(t--)
    {
        string str;     // input string
        cin>> str;

        int pos = str.length() - 2;    // the position from which substring needs to be replaced
        int cnt = 2;                   // length of the substring which needs to be replaced

        str.replace(pos, cnt, "i");     // replace the substring
        cout<< str<< endl;              // output the modified string

    }
    return 0;
}