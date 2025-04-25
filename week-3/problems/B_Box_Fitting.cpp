#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, mx_weight;
        cin >> n >> mx_weight;

        multiset<int, greater<int>> weights;
        for(int i = 0; i < n; i++) {
            int w;
            cin >> w;
            weights.insert(w);
        }

        int min_height = 0;
        while(!weights.empty()) {
            min_height++;
            int layer = mx_weight;

            for(auto it = weights.begin(); it != weights.end(); ) {
                if(layer <= 0)
                    break;

                if(*it <= layer) {
                   // cout << *it << " ";
                    layer -= *it;
                    it = weights.erase(it); // ✅ safe erase
                } else {
                    ++it;
                }
            }
           // cout << "\n";
        }

        cout << min_height << endl;
    }
    return 0;
}
