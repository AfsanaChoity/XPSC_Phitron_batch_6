#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
        }

        int drops = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > arr[(i + 1) % n]) {
                drops++;
            }
        }

        if (drops <= 1) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
