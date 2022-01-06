#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i;
    string s;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
       if(s[i]=='-')
       {
            i++;
            if(s[i]=='-')
            cout<<"2";
            else if(s[i]=='.')
            cout<<"1";
       }  
       else if(s[i]=='.')
       cout<<"0";
    }
    return 0;
}