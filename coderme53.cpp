#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,a[51],b[51],n,m,max=0,x=0,count=0,y;
          cin>>n;
          for(i=0; i<n; i++)
          {
                    cin>>a[i];
          }
          cin>>m;
          for(i=0; i<m; i++)
          {
                    cin>>b[i];
          }
          for(i=0; i<n; i++)
          {
                    for(j=0; j<m; j++)
                    {
                            if(b[j]%a[i]==0)
                            {
                                      x=b[j]/a[i];
                                      if(max<x)
                                      {
                                                max=x;
                                      }
                            }
                    }
          }
          for(i=0; i<n; i++)
          {
                    for(j=0; j<m; j++)
                    {
                              if(b[j]%a[i]==0)
                              {
                                        y=b[j]/a[i];
                                        {
                                                  if(max==y)
                                                  {
                                                            ++count;
                                                  }
                              
                                        }          
                              }          
                    }
          }
          cout<<count;
          return 0;
}