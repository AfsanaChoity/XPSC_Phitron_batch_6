#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>> x;
	int i = x;
	while(i%3 != 0)
	{
	    
	    --i;
	}

	int j = x;
	
	while(j%3 != 0)
	{
	    
	    ++j;
	}
	
	if(abs(x-i)< abs(x-j))
    {
        cout<< i;
    }
    else
    {
        cout<< j;
    }

}
