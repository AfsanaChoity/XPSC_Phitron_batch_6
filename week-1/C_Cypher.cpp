#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; // initializing 't' variable as testcases
    cin >> t;

    while (t--) // loop through for each testcase
    {
        int n; // number of wheels
        cin >> n;

        int a[n];                   // taking an array to store digits
        for (int i = 0; i < n; i++) // loop through to take each input 
        {
            cin >> a[i];            // taking digit input shown on the i-th wheel after all moves have been performed.
        }


        // loop through of number of b- moves
        for (int i = 0; i < n; i++) 
        {
            int b;                  // number of moves for each digit
            cin >> b;              
            while (b--)             // loop through for handling each move
            {
                char ch;            // moves  - 'U'  or 'D'
                cin >> ch;
                if (ch == 'D')        // if move is 'D' a[i] will be increased by 1
                {
                    if (a[i] == 9)     // if a[i] is 9 then it will be 0 after 'D' move
                        a[i] = 0;

                    else
                        a[i]++;
                }
                else if (ch == 'U')      // if move is 'U' a[i] will be decreased by 1
                {
                    {
                        if (a[i] == 0)     // if a[i] is 0 then it will be 9 after 'U' move
                            a[i] = 9;

                        else
                            a[i]--;
                    }
                }
            }
        }


        // printing the output
        for (int i = 0; i < n; i++) 
        {
            cout<< a[i] << " ";
        }
        cout<< endl;                //printing a newline after each ouput
    }
    return 0;
}