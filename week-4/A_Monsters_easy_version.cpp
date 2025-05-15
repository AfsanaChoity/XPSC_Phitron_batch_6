#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        /* code */
        int num_of_monsters;
        cin>> num_of_monsters;
        vector<int> health(num_of_monsters);
        for(int i=0; i<num_of_monsters; i++)
        {
            cin>> health[i];
        }
        sort(health.begin(), health.end());

        long long mx_spell = health[0] - 1;

        for(int i=1, j=2; i<num_of_monsters; i++)
        {
            if(health[i] == 1)
            {
                continue;
            }
            
            else if(health[i] > j)
            {
                mx_spell += health[i] - j;
               
            }
            
            j++; 
        }


        cout<< mx_spell<< endl;
    }
    
    return 0;
}