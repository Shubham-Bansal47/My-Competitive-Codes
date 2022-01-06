#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if((s[i]=='R' && s[i+1]=='R') || (s[i]=='B' && s[i+1]=='B') || (s[i]=='G' && s[i+1]=='G'))
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}