#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; // number of testcases
    cin >> t;

    // loop through for each testcase
    while (t--)
    {
        int col; // number of column
        cin >> col;

        int row = 2;         // number of rows will be 2 always
        char grid[row][col]; // grid for storing each cell's value

        // taking input for each cell
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                char ch; // input variable for each cell
                cin >> ch;
                if (ch == 'B') // if input is 'B' then 'G' will be stored
                    grid[i][j] = 'G';
                else
                    grid[i][j] = ch;
            }
        }

        // checking equality of two rows
        bool flag = true;             // initializing the two rows as equal
        for (int j = 0; j < col; j++) // loop through for checking each column of two rows
        {
            if (grid[0][j] != grid[1][j])
            {
                flag = false; // if two elements of jth column is not equal then flag will be false
                break;        // if flag is false then loop will exit
            }
        }

        // checking the output
        if (flag) // if flag is true output will be "Yes"
            cout << "YES" << endl;
        else // if flag is false output will be "No"
            cout << "NO" << endl;
    }

    return 0;
}