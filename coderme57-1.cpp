#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,m,i,j,a,b,x=0,y=0;
          cin>>n>>m;
          for(i=0; i<=int(sqrt(max(n,m))); i++)
          {
                    for(j=0; j<=int(sqrt(max(n,m))); j++)
                    {
                              a=i*i+j;
                              b=j*j+i;
                              if(a==n)
                              {
                                        ++x;
                              }
                              if(b==m)
                              {
                                        ++x;
                              }
                              if(x==2)
                              {
                                        ++y;
                              }
                              x=0;
                    }
          }
          cout<<y;
          return 0;
}