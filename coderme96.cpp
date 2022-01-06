#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,k,i,j,a,b,c,d,x=0,y=0,z=0,w=0,max1;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++)
    {
              if(s[i]=='x')
              {
                        ++x;
              }
              else
              {
                        ++y;
              }
    }
    if(x==y)
    {
              cout<<0<<endl;
    }
    else if(x>y)
    {
              cout<<n/2-y<<endl;
    }
    else
    {
              cout<<n/2-x<<endl;
    }
    if(x==y)
    {
              cout<<s;
              return 0;
    }
    else if(x>y)
    {
          for(i=0; i<n; i++)
          {
                    if(s[i]=='x')
                    {
                              s[i]='X';
                              ++z;
                              if(z==(n/2-y))
                              {
                                        break;
                              }
                    }
          }
    }
    else 
    {
              for(i=0; i<n; i++)
              {
                        if(s[i]=='X')
                        {
                                  s[i]='x';
                                  ++z;
                                  if(z==(n/2-x))
                                  {
                                            break;
                                  }
                        }
              }
    }
    cout<<s;
    
    return 0;
}