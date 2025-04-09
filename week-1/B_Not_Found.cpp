#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>> str;
    map<char, int> mp;
    for(int i=0; i<str.size(); i++)
    {
        mp[str[i]]++;

    }
    
    bool flag = true;
    for(char chr = 'a'; chr <= 'z'; chr++)
    {
        if(!mp.count(chr))
        {
            cout<< chr;
            flag = false;
            break;
        }

    }
    if(flag)
        cout<< "None";

    return 0;
}