#include<bits/stdc++.h>
using namespace std;
int main() {
    int bones, blood;
    cin>> bones>> blood;
    int x , y;
    cin>> x>> y;
    int res = (bones * x) + (blood * y);
    cout<< res;
    return 0;
}