#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> grid[i][j];

    
    vector<vector<int>> columns(m, vector<int>(n));
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i)
            columns[j][i] = grid[i][j];
        sort(columns[j].begin(), columns[j].end());
    }

    
    long long total = 0;
    for (int j = 0; j < m - 1; ++j) {
        for (int i = 0; i < n; ++i) {
            total += abs(columns[j][i] - columns[j + 1][i]);
        }
    }

    cout << total << endl;
    return 0;
}
