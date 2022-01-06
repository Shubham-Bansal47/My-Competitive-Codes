#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,i,j;
          cin>>n;
          for(i=1; i<=n+1; i++)
          {
                    for(j=1; j<=n+1-i; j++)
                    {
                              cout<<" "<<" ";
                    }
                    for(j=1; j<=i; j++)
                    {
                                        if(i!=1)
                                        {
                                                  cout<<j-1<<" ";
                                        }
                                        else
                                        {
                                                  cout<<j-1;
                                        }
                    }
                    for(j=i-1; j>=1; j--)
                    {
                              if(j!=1)
                              {
                                        cout<<j-1<<" ";
                              }
                              else
                              {
                                        cout<<j-1;
                              }
                    }                                    
                    cout<<endl;
          }
          /*  
          0
        0 1 0
      0 1 2 1 0
    0 1 2 3 2 1 0
  0 1 2 3 4 3 2 1 0
0 1 2 3 4 5 4 3 2 1 0
  0 1 2 3 4 3 2 1 0
    0 1 2 3 2 1 0
      0 1 2 1 0
        0 1 0
          0
          */
          for(i=1; i<=n; i++)
          {
                    for(j=1; j<=i; j++)
                    {
                              cout<<" "<<" ";
                    }
                    for(j=1; j<=n+1-i; j++)
                    {
                                        if(i!=n)
                                        {
                                                  cout<<j-1<<" ";
                                        }
                                        else
                                        {
                                                  cout<<j-1;
                                        }
                    }
                    for(j=n-i; j>=1; j--)
                    {
                              if(j!=1)
                               {
                                         cout<<j-1<<" ";
                               }
                               else
                               {
                                         cout<<j-1;
                               }
                    }
                    cout<<endl;
          }
          
          return 0;
}