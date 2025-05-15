#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int num;
        cin >> num;
        if (num == 1) {
            cout << -1 << endl;
            continue;
        }
        vector<int> arr;
        if (num % 2 == 0) {
            for (int i = 0; i < num / 2; i++) {
                arr.push_back(1);
                arr.push_back(-1);
            }
        } else {
            arr.push_back(1);
            arr.push_back(2);
            arr.push_back(-3);
            int rem = num - 3;
            for (int i = 0; i < rem / 2; i++) 
            {
                arr.push_back(1);
                arr.push_back(-1);
            }
        }
        for (int val : arr) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}