#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	int i,checker=1;
	cin>>s;
	for(i=0;i<s.size();i++)
	{
	    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
	    {
	        i+=2;
	        if(!checker)
	        {
	            cout<<" ";
	        }
	        continue;
	    }
	    else 
	    {
	        checker=0;
	        cout<<s[i];
	    }
	}
	return 0;
}