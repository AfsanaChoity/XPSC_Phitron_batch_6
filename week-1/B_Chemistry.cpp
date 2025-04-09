#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; // number of testcases
    cin >> t;

    while (t--)
    {
        //cout << "For test case : " << t << endl;
        int n; // length of the string
        int k; // number of characters to be deleted

        cin >> n >> k;

        string str;   // string
        cin >> str;

        int rest; // remaining value after deleting k from n
        rest = n - k;

        // let's count the letters first
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }


       
        int odd = 0;       //  number of letters with odd counts

    
        if (rest == 1)      // if the remaining portion of the string is 1 then it will always form a palindrome
        {
            cout << "YES" << endl;
        }

        else         
        {
            //counting the  number of letters with odd occurrences
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                if(it->second % 2 !=0)
                {
                    odd++;
                }
            }

            if(odd <= k+1)            // if odd is less than or equal k+1 then it is possible to form a palindrome
                cout<<"YES"<<endl;
            else
                cout<< "NO"<< endl;

            
        }
    }
    return 0;
}