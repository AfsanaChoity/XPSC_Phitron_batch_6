#include<bits/stdc++.h>
using namespace std;
int main() {
    int testcases;
    cin>> testcases;
    vector<string> friends;
    while (testcases--)
    {
        /* code */
        string name;
        cin>> name;
        friends.push_back(name);

    }
    map<string, int> mp;
    for(int i= friends.size() -1; i>=0; i--)
    {
        
        if(mp[friends[i]]==0)
        {
            cout<< friends[i]<< endl;
            mp[friends[i]]++;
        }
        
    }
    
    return 0;
}