#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int n;                  //length of the strip.
        cin>> n;

        string str;              // the string
        cin>> str;

        int left, right;         // taking two pointer
        
        for(int i=0; i<n; i++)
        {
            if(str[i] == 'B')
            {
                left = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(str[i] == 'B')
            {
                right = i;
                break;
            }
        }

        // calculating the output
        int min_cells_painted = right - left + 1;
        cout<< min_cells_painted<<endl;
    }
    return 0;
}