#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //pair:

    //pair<string, int> student = {"dablu", 10};
    //auto [name, roll] = student;
    //cout<< name<< " "<< roll<< endl;

    pair<string, int> students[3];
    for(int i=0; i<5; i++)
    {
        cin>> students[i].first>> students[i].second;
    }
    for(auto [x,y] : students)
    {
        cout<< x << " "<< y<< endl;
    }

    //tuple
    tuple<string, int, string> t = {"rim", 10, "019"};
    //cout<< get<0>(t)<< " "<<get<1>(t)<< " "<<get<2>(t)<< endl;
    auto [name, roll, phone] = t;
    cout<< name<< " "<< roll << " "<< phone<< endl;
    return 0;
}