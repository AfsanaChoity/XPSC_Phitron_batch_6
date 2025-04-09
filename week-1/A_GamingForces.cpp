#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tests;        // number of testcases
    cin>> tests;

    while(tests--)     // loop through each testcase
    {
        int number_of_monsters;
        cin>> number_of_monsters;

        int health_of_monsters[number_of_monsters];        // taking an array for storing the monsters' health

        int freq[101] = {0};                     // taking frequency array for storing counts of monsters' health which are similar
        for(int i=1; i<=number_of_monsters; i++)           // loop for storing monsters' health in an array
        {
            cin>> health_of_monsters[i];
            freq[health_of_monsters[i]]++;
        }

        int min_spells=0 ;          // initializing minimum number of spell casts should be performed to kill all monsters as '0'
        
        // calculating minimum spells
        min_spells = (freq[1]/2) + (freq[1] % 2);         // calculation for holding '1' health 
        for(int i=2; i<=100; i++)           
        {
            //cout<< freq[i] << " ";
            if(freq[i] > 0)
            {
                min_spells = min_spells+ freq[i];        // calculation for holding more than '1' health
            }
            

        }

        cout<<min_spells<< endl;
    }

    return 0;
}