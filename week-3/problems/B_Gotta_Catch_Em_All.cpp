#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int num_of_p, normal_p, master_p;
        cin>> num_of_p>> normal_p>> master_p;
        //vector<int> diff(num_of_p);
        int ans = 0;
        for(int i=0; i<num_of_p; i++)
        {
            int x;
            cin>> x;
            //cin>> diff[i];
            if(x* normal_p < master_p)
            {
                ans += x* normal_p;
            }
            else
            {
                ans += master_p;
            }
        }
        cout<< ans<< endl;
        

    }
    return 0;
}