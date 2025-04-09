#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;

    //int i=0;
    while (testcase--)
    {
        //i++;
        //cout<< "Test: "<< i << endl;
        double n; // the length of the bit strings
        cin >> n;
        string str_a, str_b;
        cin >> str_a;
        cin >> str_b;
        
        vector<char> zig_zag1;
        vector<char> zig_zag2;
        for(int i=0; i<n; i+=2)
        {
           zig_zag1.push_back(str_a[i]);
           zig_zag1.push_back(str_b[i+1]);
           zig_zag2.push_back(str_b[i]);
           zig_zag2.push_back(str_a[i+1]);
        }

        // for(char ch : zig_zag1)
        //     cout<< ch;
        // cout<< endl;
        // for(char ch : zig_zag2)
        //     cout<< ch;
        // cout<< endl;
        
        int num_of_zero_zigzag1= 0;
        for(char ch : zig_zag1)
        {
            if(ch == '0')
                num_of_zero_zigzag1++;
        }

        int num_of_zero_zigzag2= 0;
        for(char ch : zig_zag2)
        {
            if(ch == '0')
                num_of_zero_zigzag2++;
        }

        //cout<< num_of_zero_zigzag1 << " & "<< num_of_zero_zigzag2<< endl;
        if(num_of_zero_zigzag1 >= n/2 && num_of_zero_zigzag2 >= n/2)
            cout<< "YES"<< endl;
        else
            cout<< "NO"<< endl;
        
        
    }
    return 0;
}