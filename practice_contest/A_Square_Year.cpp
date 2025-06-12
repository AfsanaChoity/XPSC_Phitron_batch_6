#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        string str;
        cin>> str;
        int num = stoi(str);
        float sq_num_flt = sqrt(num);
        int sq_num_int = sq_num_flt;
        if(sq_num_int == sq_num_flt)
        {
            int a, b;
            if(sq_num_int % 2 == 0)
            {
                 a = sq_num_int /2;
                 b = a;
            }
            else
            {
                a = sq_num_int /2;
                b = a+1;
            }
            cout<< a<< " "<< b<< endl;
        }
        else
        {
            cout<< -1<< endl;
        }
    }
    
    return 0;
}