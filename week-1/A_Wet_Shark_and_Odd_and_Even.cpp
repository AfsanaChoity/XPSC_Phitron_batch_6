#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;                      // number of integers
    cin>> n;
    vector<int> odd_nums;         // taking a vector for storing odd numbers

    long long max_sum=0;             // initializing the maximum possible even sum as '0'

    for(int i=0; i<n; i++)            // loop through each input number
    {
        int val;                     //declaring a variable for taking the input integer
        cin>> val;
        if(val%2 == 0)              // handling even integer input
        {
            max_sum = max_sum + val;     // adding even integers to the max_sum
        }
        else                           // handling odd integer input
        {
            odd_nums.push_back(val);
        }
    }
    
    for(int x : odd_nums)
    {
        max_sum = max_sum + x;          // adding all the add integers to max_sum
    }

    // checking condition if the max_sum is even or not
    if(odd_nums.size() % 2 ==0)           
    {
        cout<< max_sum;                   // printing the maximum even sum
    }
    else
    {
        int min_value = *min_element(odd_nums.begin(), odd_nums.end());           //calculating the minimum value to subtract it from the max_sum for getting the maximum even sum
        max_sum = max_sum - min_value;
        cout<< max_sum;

    }

   
    

}