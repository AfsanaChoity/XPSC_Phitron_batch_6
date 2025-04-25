#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        //vector<vector<int>> grid(n, vector<int>(n));
        int grid[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>> grid[i][j];
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {

                cout<< grid[i][j]<< " ";
            }
            cout<< endl;
        }

    }

        

    return 0;
}
