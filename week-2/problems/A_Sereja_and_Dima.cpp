#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // the number of cards
    cin >> n;

    vector<int> v(n); // vector for storing numbers on cards

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sereja_points = 0; // initialize sereja's point as 0
    int dima_points = 0;   // initialize dima's point as 0

    int left = 0;      // starting the left pointer from 1st index
    int right = n - 1; // starting the right pointer from last index

    while (left <= right)
    {
        // Sereja's turn:
        if (v[left] >= v[right])
        {
            // Sereja picks the left card if it's greater or equal
            sereja_points = sereja_points + v[left];
            left++;

            if (left > right)
                break;

            // Dima's turn:
            if (v[left] >= v[right])
            {
                // Dima picks the left card if it's greater or equal
                dima_points = dima_points + v[left];
                left++;
            }
            else
            {
                // Dima picks the right card
                dima_points = dima_points + v[right];
                right--;
            }
        }
        else
        {
            // Sereja picks the right card if it's greater
            sereja_points = sereja_points + v[right];
            right--;

            if (left > right)
                break;

            // Dima's turn:
            if (v[left] >= v[right])
            {
                // Dima picks the left card if it's greater or equal
                dima_points = dima_points + v[left];
                left++;
            }
            else
            {
                // Dima picks the right card
                dima_points = dima_points + v[right];
                right--;
            }
        }
    }

    // the final scores of Sereja and Dima
    cout << sereja_points << " " << dima_points;

    return 0;
}