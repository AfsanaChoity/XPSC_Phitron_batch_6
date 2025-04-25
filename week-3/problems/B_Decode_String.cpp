#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n;
        cin>> n;
        string str;
        cin>> str;
        vector<char> v;
        for(int i=n-1; i>=0; i--)
        {
            if(str[i] != '0')
            {
                int num = str[i] - '0';
                char ch = 97+ num -1;
                //cout<< ch<< endl;
                v.push_back(ch);
            }
            else
            {
                
                --i;
                int num1 = str[i] - '0';
                --i;
                int num2 = str[i] - '0';
                num2 *= 10;
                int num = num1+num2;
                char ch = 97+ num -1;
                //cout<< ch<< endl;
                v.push_back(ch);

            }
        }
        for(int i= v.size()-1; i>=0; i--)
        {
            cout<< v[i];
        }
        cout<< endl;
    }
    
    return 0;
}