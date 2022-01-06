#include <bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,n,x=0,y=0,z=0,w=0,a,b;
          cin>>n;
          char arr[n][n];
          for(i=0; i<n; i++)
          {
                    for(j=0; j<n; j++)
                    {
                              cin>>arr[i][j];
                    }
          }
          for(i=0; i<n; i++)
          {
                    for(j=0; j<n; j++)
                    {
                              if(arr[i][j+1]=='o' && j<(n-1))
                              {
                                        ++x;
                              }
                              if(arr[i][j-1]=='o' && j>0)
                              {
                                        ++y;
                              }
                              if(arr[i+1][j]=='o' && i<(n-1))
                              {
                                        ++z;
                              }
                              if(arr[i-1][j]=='o' && i>0)
                              {
                                        ++w;
                              }
                              if((x+y+z+w)%2==0)
                              {
                                        
                              }
                              else
                              {
                                        cout<<"NO";
                                        return 0;
                              }
                              x=0;
                              y=0;
                              z=0;
                              w=0;
                    }
          }
          cout<<"YES";
          
          
          return 0;
}