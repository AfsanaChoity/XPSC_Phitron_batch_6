#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;     //testcases
    cin>>t;

    while(t--)
    {
        string str;
        cin>> str;
        bool changed = false;
        for(int i=0; i<str.size() - 1; i++)
        {
            
            if(str[i] == str[i+1])
            {
                for (char ch = 'a'; ch <= 'z'; ch++) {
                    if (ch != str[i]) {
                        str.insert(i+1, 1, ch);
                        changed = true;  
                        break;
                    }
                }
                break;
            }
        }
        if(changed)
            cout<< str<<endl;
        else
        {
            for (char ch = 'a'; ch <= 'z'; ch++) {
                if (ch != str[0]) {
                    str.insert(0, 1, ch);  
                    break;
                }
            }
            cout<< str<<endl;
        }
    }
    return 0;
}