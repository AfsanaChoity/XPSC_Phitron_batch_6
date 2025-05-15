#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n, k;
        cin>> n>> k;
        vector<int> pieces(k);
        for(int i=0; i<k; i++)
        {
            cin>> pieces[i];
        }
        sort(pieces.begin(), pieces.end());
        int steps=0, num_of_one=0;
        for(int i=0; i<k-1; i++)
        {
            if(pieces[i] == 1)
            {
                num_of_one++;
            }
            else{
                num_of_one += pieces[i];
                steps += pieces[i] - 1;
            }
        }
        steps += num_of_one;
        cout<< steps<< endl;
    }
    
    return 0;
}