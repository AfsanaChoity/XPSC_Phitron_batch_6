#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;
    //vector<int> results;

    while (testcases--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int left = (n - k - 1) / 2;
        int right = (n - 1) - left;

        int ans = (a[right] - a[left] + 1);
        cout<< ans<< endl;
    }

    

    return 0;
}
