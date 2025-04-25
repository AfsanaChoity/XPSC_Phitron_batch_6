#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int num_of_jar, children;
        cin>> num_of_jar>> children;
        vector<int> cookies;
        for(int i=0; i<num_of_jar; i++)
        {
            int x;
            cin>> x;
            if(x>= children)
            {
                int r = x%children;
                cookies.push_back(r);
            }
        }
        if(cookies.empty())
        {
            cout<< -1<< endl;
        }
        else
        {
            int ans = *min_element(cookies.begin(), cookies.end());
            cout<< ans<< endl;
        }
        

    }
    return 0;
}