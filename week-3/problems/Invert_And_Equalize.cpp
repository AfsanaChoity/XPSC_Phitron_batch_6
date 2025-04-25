#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;
	cin>> t;
	while(t--)
	{
	    string str;
        int n;
        cin>> n;
	    cin>> str;
        
	    int num_of_zero =0 ;
	    int num_of_one =0 ;
	    if(str[0] == '0')
	    {
	        num_of_zero++;
	    }
	    else if(str[0] == '1')
	    {
	        num_of_one++;
	        
	    }
    //    cout<<"Zero: "<< num_of_zero<< endl;
    //    cout<<"One: "<< num_of_one<< endl;
    //     cout<< "After"<< endl;
	    for(int i=1; i<n; i++)
	    {
	        if(str[i] == '1' && str[i-1] != '1')
	        {
	            num_of_one++;
	        }
	        else if(str[i] == '0' && str[i-1] != '0')
	        {
	            num_of_zero++;
	        }
	    }
        //cout<<"Zero: "<< num_of_zero<< endl;
        //cout<<"One: "<< num_of_one<< endl;

	    int min_operations = min(num_of_zero, num_of_one);
	    cout<< min_operations<< endl;
	}

}
