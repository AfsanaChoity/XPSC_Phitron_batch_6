#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int children, mx_diff;
        cin>> children>> mx_diff;
        vector<int> choco;
        int total_choco = 0;
        for(int i=0; i<children; i++)
        {
            int x;
            cin>> x;
            total_choco += x;
        }
        if(total_choco>= children && mx_diff < total_choco)
            cout<< "YES\n";
        else if(total_choco < children || mx_diff > total_choco)
            cout<< "NO\n";
    }
    return 0;
}