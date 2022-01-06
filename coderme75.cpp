#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,x=0,y=0,a,b;
    cin>>n;
    string s;
    cin>>s;
    if(n<26)
    {
              cout<<"NO";
              return 0;
    }
    for(j=0; j<s.size(); j++)
    {
             s[j]=tolower(s[j]); 
    }
    for(char i='a'; i<='z'; i++)
    {
              for(j=0; j<n; j++)
              {
                        if(i==s[j])
                        {
                                  ++x;
                        }
              }
              if(x>0)
              {
                        
              }
              else
              {
                        cout<<"NO";
                        return 0;
              }
              x=0;
    }
    cout<<"YES";
    
    return 0;
}