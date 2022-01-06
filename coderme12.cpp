#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,count=0;
    string s;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='7' || s[i]=='4')
        {
            count++;
        }
    }
    if(count==7 || count==4)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    return 0;
}