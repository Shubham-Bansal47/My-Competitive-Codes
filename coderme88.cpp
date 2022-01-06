#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,a,b,x=0,y=0;
    cin>>n>>m;
    string s[n];
    for(i=0; i<n; i++)
    {
              cin>>s[i];
    }
    for(i=0; i<n; i++)
    {
              for(j=0; j<m; j++)
              {
                        if(s[i][j]=='S')
                        {
                              ++x;
                              break;
                        }
              }
    }
    for(i=0; i<m; i++)
    {
              for(j=0; j<n; j++)
              {
                        if(s[j][i]=='S')
                        {
                               ++y;
                               break;
                        }
              }
    }
    cout<<m*(n-x)+n*(m-y)-(n-x)*(m-y); 
    
                    
    return 0;
}