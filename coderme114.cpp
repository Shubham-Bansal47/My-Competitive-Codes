#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n,m,i,j,y,x,w;
    cin>>n>>m;
    w=n+m;
    x=n;
    y=m;
    for(i=1; i<=w; i++)
    {
                    if(x>=y)
                    {
                              if(i%2!=0)
                              {
                                        cout<<"B";
                                        --n;
                              }
                              else 
                              {
                                        cout<<"G";
                                        --m;
                              }
                              if(m==0)
                              {
                                        for(j=1; j<=n; j++)
                                        {
                                                  cout<<"B";
                                        }
                                        break;
                              }
                    }
                    else 
                    {
                              if(i%2!=0)
                              {
                                        cout<<"G";
                                        --m;
                              }
                              else 
                              {
                                        cout<<"B";
                                        --n;
                              }
                              if(n==0)
                              {
                                        for(j=1; j<=m; j++)
                                        {
                                                  cout<<"G";
                                        }
                                        break;
                              }
                    }
    }
    
    
    return 0;
}