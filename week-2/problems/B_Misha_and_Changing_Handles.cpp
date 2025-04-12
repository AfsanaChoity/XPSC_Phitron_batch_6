#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // the number of handle change requests
    cin >> n;
    map<string, string> mp1, mp2;
    while (n--)
    {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;
        if (mp2.find(old_handle) != mp2.end())
        {
            string par_handle = mp2[old_handle];
            mp1[par_handle] = new_handle;
            mp2[new_handle] = par_handle;
        }
        else
        {
            mp1[old_handle] = new_handle;
            mp2[new_handle] = old_handle;
        }
    }
    cout<< mp1.size()<< endl;
    for(auto [first_handle, last_handle] : mp1)
    {
        cout<< first_handle << " "<< last_handle<< endl;
    }
    return 0;
}