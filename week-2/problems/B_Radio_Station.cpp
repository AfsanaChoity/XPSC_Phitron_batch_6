#include<bits/stdc++.h>
using namespace std;
int main() {
    int n , m;
    cin>> n>>m;
    map<string, string> isp;
    while(n--)
    {
        string name , ip;
        cin>> name>> ip;
        isp[ip] = name;
    }

    while (m--)
    {
        /* code */
        string command , ip;
        cin>> command>> ip;
        ip.pop_back();
        string isp_name = isp[ip];
        
        cout<< command << " "<< ip<< "; #"<< isp_name<< endl;
    }
    
    return 0;
}