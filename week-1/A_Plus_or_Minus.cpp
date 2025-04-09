#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    
    //taking input for multiple test_cases
    while(test_cases--)
    {
        int a, b, c;
        cin>> a>>b>>c;

        //checking the condition
        if(a+b == c)
            cout<< "+"<< endl;        
        else
            cout<< "-"<< endl;
    }
    return 0;
}