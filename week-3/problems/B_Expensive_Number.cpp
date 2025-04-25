#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;
    while(t--)
    {
        string str;
        cin>> str;
        int num_of_removed_digits=0, idx;
        for(int i= str.size()-1 ; i>= 0; i--)
        {
            if(str[i] != '0')
            {
                idx = i;
                break;
            }
            else
                num_of_removed_digits++;
        }
        for(int j=0; j< idx; j++)
        {
            if(str[j] != '0')
            {
                num_of_removed_digits++;
            }
        }
        cout<< num_of_removed_digits<< endl;

    }
    return 0;
}