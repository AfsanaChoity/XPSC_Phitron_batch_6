#include <bits/stdc++.h>
using namespace std;

struct Weapon {
    int S, D;
    Weapon(int s, int d) : S(s), D(d) {}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, H;
        cin >> N >> H;
        vector<Weapon> weapons;
        weapons.reserve(N);
        int option1 = INT_MAX;
        for (int i = 0; i < N; ++i) {
            int S, D;
            cin >> S >> D;
            weapons.emplace_back(S, D);
            if (D >= H) {
                option1 = min(option1, S);
            }
        }

        sort(weapons.begin(), weapons.end(), [](const Weapon& a, const Weapon& b) {
            return a.D < b.D;
        });

        vector<int> suffix_min(N + 1, INT_MAX);
        for (int i = N - 1; i >= 0; --i) {
            suffix_min[i] = min(weapons[i].S, suffix_min[i + 1]);
        }

        vector<Weapon> max_dps;
        for (const auto& w : weapons) {
            if (max_dps.empty()) {
                max_dps.push_back(w);
            } else {
                const Weapon& best = max_dps[0];
                long long curr = (long long)w.D * best.S;
                long long existing = (long long)best.D * w.S;
                if (curr > existing) {
                    max_dps.clear();
                    max_dps.push_back(w);
                } else if (curr == existing) {
                    max_dps.push_back(w);
                }
            }
        }

        int option2 = INT_MAX;
        for (const auto& w : max_dps) {
            int D_i = w.D;
            int S_i = w.S;
            int m = (H + D_i - 1) / D_i;
            int time2a = m * S_i;

            int H_remaining = H - (m - 1) * D_i;
            auto it = lower_bound(weapons.begin(), weapons.end(), H_remaining,
                                 [](const Weapon& a, int val) { return a.D < val; });
            int min_Sj = INT_MAX;
            if (it != weapons.end()) {
                int idx = it - weapons.begin();
                min_Sj = suffix_min[idx];
            }

            int time2b = (min_Sj != INT_MAX) ? (m - 1) * S_i + min_Sj : INT_MAX;
            int candidate = min(time2a, time2b);
            option2 = min(option2, candidate);
        }

        int answer = min(option1, option2);
        cout << answer << '\n';
    }

    return 0;
}