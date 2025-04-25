#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int a,b, c;
        cin>>a>>b>>c;
        int first_elevator_time= abs(a - 1);
        int second_elevator_time = abs(c - b);
        if(c != 1)
        {
            second_elevator_time += abs(c-1);
        }
        
       
        if(first_elevator_time < second_elevator_time)
        {
            cout<< 1<< endl;
        }
        else if(first_elevator_time > second_elevator_time)
        {
            cout<< 2<< endl;
        }
        else
        {
            cout<< 3<< endl;
        }
    }
    return 0;
}