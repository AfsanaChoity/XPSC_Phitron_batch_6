#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n; // number of boxes
    cin >> n;
    map<long, long> boxes;
    for(long i=0; i<n;i++)
    {
        long x;
        cin>> x;
        boxes[x]++;

    }
    long visible_boxes=0;

    for(auto& [key, cnt] : boxes)
    {
        visible_boxes = max(visible_boxes, cnt);
    }
    cout << visible_boxes;
    return 0;
}