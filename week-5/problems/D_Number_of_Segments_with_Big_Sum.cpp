#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long s;
    cin>> n>> s;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>> arr[i];
    }
    long long good_segs = 0;
    int l=0, r=0;
    long long sum = 0;
    while (r<n)
    {
        sum += arr[r];
        //cout<< arr[r]<< endl;
        while(sum >= s)
        {
            good_segs++;
            good_segs += (n - r - 1);
            sum -= arr[l];
            l++;

        }
        r++;
    }
    cout<< good_segs;
    
    
    
    return 0;
}