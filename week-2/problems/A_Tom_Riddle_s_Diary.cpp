#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;             //the number of names in the list
    cin>> n;
    map<string, int> names;        // Map to store the names and how many times they have appeared
    while(n--)
    {
        string name;
        cin>>name;                      // Read the name from input

        // Check if the name has already appeared before
        if(names.count(name) == 0)
        {
            cout<< "NO"<< endl;           // Name not seen before
            names[name]++;                // Record the occurrence of the name that has not seen before
        }
        else
        {
            cout<< "YES"<< endl;           // Name has been seen before
        }
        
    }
    return 0;
}