#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int n;
        string str1, str2;
        cin >> n >> str1 >> str2;
        bool flag = true;
        int count_str1 = 0, count_str2 = 0;
        for (int i = 0; i < n; ++i) {
            if (str2[i] == '1') {
                if (str1[i] != '1') {
                    flag = false;
                }
                count_str2++;
            }
            if (str1[i] == '1') {
                count_str1++;
            }
        }
        if (!flag || count_str1 < count_str2 || (count_str1 - count_str2) % 2 != 0) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}