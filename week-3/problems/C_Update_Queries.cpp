#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n, m;
        cin>> n>>m;
        string str1;
        cin>> str1;
        set<int> idx;
        for(int i=0; i<m; i++)
        {
            int x;
            cin>> x;
            idx.insert(x);
        }

        

        string str2;
        cin>> str2;

        vector<char> characters;
        for(int i=0; i<m; i++)
        {
            characters.push_back(str2[i]);
        }
        sort(characters.begin(), characters.end());

        int j = 0;
        auto it = idx.begin();
        while(it != idx.end())
        {
            int id = *it - 1;
            str1[id] = characters[j];
            it ++;
            j ++;
        }
        cout<< str1<< endl;

    }
    
    return 0;
}