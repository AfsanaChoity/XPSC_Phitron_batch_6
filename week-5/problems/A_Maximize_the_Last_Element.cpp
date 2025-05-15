#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++)
        {
            cin>> nums[i];
        }

        int l=0, r=n-1, mx;
        while(l<=r)
        {
            
            if(nums[l]> nums[r])
            {
                mx = nums[l];
                r -= 2;
            }
            else
            {
                mx = nums[r];
                l += 2;
            }
        }
        cout<< mx<<"\n";
    }
    
    return 0;
}