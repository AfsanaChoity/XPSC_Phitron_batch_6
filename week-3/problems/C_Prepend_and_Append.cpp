#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        string str;
        cin>> str;
        int left =0;
        int right = n-1;
        while(left<right)
        {
            if(str[left] == '0' && str[right] == '1')
            {
                left++;
                right--;
                continue;
            }
            else if(str[left] == '1' && str[right] == '0')
            {
                left++;
                right--;
                continue;
            }
            break;
        }
        int ln = n - left -(n-1-right);
        cout<< ln<< endl;
    }
    return 0;
}