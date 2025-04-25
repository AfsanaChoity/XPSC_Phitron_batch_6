#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num_of_contest;
    cin >> num_of_contest;
    multiset<int> contests;
    for (int i = 0; i < num_of_contest; i++)
    {
        int problems;
        cin >> problems;
        contests.insert(problems);
    }
    int max_training_days = 0;

    for (int i = 1; i <= num_of_contest; i++)
    {
        auto it = contests.lower_bound(i);
        if (it != contests.end())
        {
            max_training_days++;
            contests.erase(it);
        }
        else
        {
            break;
        }
    }
    cout << max_training_days;
    return 0;
}