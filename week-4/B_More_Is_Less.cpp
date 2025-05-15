#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b, x;
        cin >> n >> a >> b >> x;
        if (a >= n - x) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}