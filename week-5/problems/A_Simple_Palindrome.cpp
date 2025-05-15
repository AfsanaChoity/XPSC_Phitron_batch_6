#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>> n;
        string str = "aeiou";
        int rest = n%5;
        int q = n/5;
        string output_str;
        if(q> 0)
        {
            for(int j=0; j<q; j++)
            {
                output_str += str;
            }
        } 
        for(int i=0; i<rest; i++)
        {
            output_str += str[i];
        }
        sort(output_str.begin(), output_str.end());

        cout<<output_str<< endl;
    }
    
    return 0;
}