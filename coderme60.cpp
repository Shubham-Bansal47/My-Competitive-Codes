#include <bits/stdc++.h>
using namespace std;

int main() 
{
          int n,i,j,x=0,y=0,a=0,b=0,count=0;
          cin>>n;
          int arr[n];
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
                    y+=arr[i];
                    if(arr[i]==5)
                    {
                              ++a;
                    }
                    else
                    {
                              ++b;
                    }
                    if(y%9==0 && y!=0)
                    {
                              ++count;
                    }
          }
          x=5*a;
          if(a==n)
          {
                    cout<<-1;
          }
          else if(a>0 && b>0)
          {
                    if(count>0)
                    {
                              up:
                              if(x%9==0)
                              {
                                        for(i=1; i<=x; i=i+5)
                                        {
                                                  cout<<5;
                                        }
                                        for(i=1; i<=b; i++)
                                        {
                                                  cout<<0;
                                        }
                              }
                              else
                              {
                                        x=x-5;
                                        goto up;
                              }
                    }
                    else
                    {
                              cout<<0;
                    }
                              
          }
          else 
          {
                    cout<<0;
          }

          return 0;
}