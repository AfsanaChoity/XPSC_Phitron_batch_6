#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;        // number of requests
    cin>> n;
    map<string, int> users;
    int i=0;
    while(n--)
    {
        string user_name;
        cin>> user_name;

        users[user_name]++;
        if(users[user_name] == 1)
        {
            cout<< "OK"<< endl;
        }
        else if(users[user_name] > 1)
        {
            int cnt = users[user_name] - 1;
            string added_string = to_string(cnt);
            user_name += added_string;
            cout<< user_name<< endl;
            
        }
            

    }
    return 0;
}