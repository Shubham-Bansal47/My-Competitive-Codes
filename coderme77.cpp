#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,x=0,y=0,a=1,b;
    cin>>n;
    string s[n];
    for(i=0; i<n; i++)
    {
              cin>>s[i];
    }
    for(i=0; i<n-1; i++)
    {
              if(!s[i].compare(s[i+1]))
              {
                        
              }
              else
              {
                        ++a;
              }
    }
    cout<<a;
                    
    
    return 0;
}