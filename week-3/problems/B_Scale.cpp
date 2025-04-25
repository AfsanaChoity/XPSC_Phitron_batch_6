#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>> t;
    while(t--)
    {
        int n, k;
        cin>> n>> k;
        //int grid[n][n];
        vector<string> grid;
        for(int i=0; i<n; i++)
        {
            string str;
            cin>> str;
            grid.push_back(str);
        }

        for(int i=0; i<n; i+=k)
        {
            for(int j=0; j<n; j+=k)
            {

                cout<< grid[i][j];
            }
            cout<< endl;
        }

    }

        

    return 0;
}
