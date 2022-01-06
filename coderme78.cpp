#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x=0,y=0,a=0,b=0;                
    cin>>n;
    string s[n];
    set<char> se;
    for(i=0; i<n; i++)
    {
              cin>>s[i];
    }
    for(i=0; i<n; i++)
    {
              for(j=0; j<n; j++)
              {
                        se.insert(s[i][j]);
              }
    }
    if(se.size()!=2)
    {
              cout<<"NO";
              return 0;
    }
    for(i=0; i<n; i++)
    {
          if(s[i][i]==s[0][0] && s[i][n-1-i]==s[0][0] && s[i][i]==s[i][n-1-i])
          {
          }
          else
          {
                    cout<<"NO";
                    return 0;
          }
          for(j=0; j<n; j++)
          {
                    if(j!=i && j!=(n-1-i))
                    {
                        if(s[i][j]!=s[0][0])
                        {
                        }
                        else
                        {
                            cout<<"NO";
                            return 0;
                        }
                    }
                    else
                    {
                    }
          }
    }
    cout<<"YES";
    
    return 0;
}