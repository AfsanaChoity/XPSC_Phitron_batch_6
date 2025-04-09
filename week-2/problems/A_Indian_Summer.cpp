#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;           //the number of leaves
    cin>>n;

    set<pair<string, string>> s;           //set of inputs' leaves & colors
    for(int i=0; i<n; i++)
    {
        string str1, str2;
        cin>> str1>> str2;
        s.insert({str1, str2});
    }

    cout<< s.size();
    return 0;
}