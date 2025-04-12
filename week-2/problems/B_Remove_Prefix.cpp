#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;          //number of testcases
    cin>> t;
    while(t--)
    {
        int n;       //the length of the given sequence 
        cin>> n;
        vector<int> nums(n);
        vector<bool> visited(200005);
        for(int i=0; i<n; i++)
        {
            cin>>nums[i];
            
        }
        int length_of_suffix = 0;
        
        for(int i=n-1; i>=0; i--)
        {
            if(visited[nums[i]] == 1)
            {
                break;
            }
            length_of_suffix++;
            visited[nums[i]] = 1;
        }

        int min_num_of_removed_element = n - length_of_suffix;
        
        cout<< min_num_of_removed_element<< endl;

    }
    return 0;
}