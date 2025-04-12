#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;         //number of testcases
    cin>>t;
    while(t--)
    {
        int n;      //length of the string
        cin>> n;

        string str;
        cin>> str;
        set<char> letters;
        for(int i=0; i<n; i++)
        {
            letters.insert(str[i]);

        }
        vector<char> v;
        for(auto it = letters.begin(); it != letters.end(); it++)
        {
            v.push_back(*it);
        }
        map<char, char> mp;
        int left = 0;
        int right = v.size()-1;
        while(left <= right )
        {
            mp[v[left]] = v[right];
            mp[v[right]] = v[left];
            left++;
            right--;
        }
        for(int i=0; i<n; i++)
        {
            str[i] = mp[str[i]];

        }
        cout<< str<< endl;
        

    }
    return 0;
}