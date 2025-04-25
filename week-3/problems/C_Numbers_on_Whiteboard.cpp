#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    //cout<< t<< endl;
    while(t--)
    {
        int n;
        cin>> n;
        cout<< 2<< endl;
        if(n == 2)
        {
            cout<< 1<<" "<< 2<< endl;
            continue;
        }
        int a = n - 2;
        int b = n;
        vector<pair<int,int>> erased_value;
        erased_value.push_back({a,b});
        erased_value.push_back({n-1,n-1});
        while(a >1 && b>3)
        {
            a--;
            b--;
            erased_value.push_back({a,b});

        }
        for(auto [x,y] : erased_value)
        {
            cout<< x << " "<< y<< endl;
        }
    }

    return 0;
}