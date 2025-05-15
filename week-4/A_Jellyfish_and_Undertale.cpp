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
        long long mx_boom_timer, initial_value_of_timer, number_of_tools;
        cin>> mx_boom_timer>> initial_value_of_timer>> number_of_tools;

        
        long long mx_time = initial_value_of_timer - 1;
        for(int i=0; i<number_of_tools; i++)
        {
            long long x;
            cin>> x;
            long long c = min(x+1, mx_boom_timer);
            mx_time += c - 1;
            

        }
        mx_time += 1;
        cout<< mx_time<< endl;
    
        

    }
    
    return 0;
}