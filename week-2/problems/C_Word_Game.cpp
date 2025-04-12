#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases; // number of testcases
    cin >> testcases;

    while (testcases--)
    {
        int num_of_words; // the number of words written by each person
        cin >> num_of_words;

        vector<vector<string>> words(3, vector<string>(num_of_words)); // initializing vector to store the words
        map<string, int> word_count;                                   // for storing word counts

        // loop for taking input for vector's each cell       & counting the words
        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < num_of_words; col++)
            {
                string str; // the word
                cin >> str;
                words[row][col] = str; // storing the word in a 2D vector
                word_count[str]++;     // counting the word
            }
        }

        vector<int> points(3); // vector for storing three guys' points

        // loop through each word for counting points
        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < num_of_words; col++)
            {

                if (word_count[words[row][col]] == 1) // if word count is one '3' points will be added
                    points[row] += 3;
                else if (word_count[words[row][col]] == 2) // if word count is two '1' point will be added
                    points[row] += 1;
            }
        }

        // printing the all three guys' points
        for (int p : points)
        {
            cout << p << " ";
        }
        cout << endl;
    }
    return 0;
}