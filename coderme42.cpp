#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int i,j,t,a[10010][3],x=0,y=0,z=0,count=0;
          cin>>t;
          for(i=0; i<t; i++)
          {
                    for(j=0; j<3; j++)
                    {
                              cin>>a[i][j];
                              if((a[i][2]%a[i][0])==0)
                              {
                                        x=a[i][0];
                              }
                              else
                              {
                                        x=a[i][2]%a[i][0];
                              }
                              y=(a[i][2]/a[i][1])+1;
                    } 
          cout<<(x-1)*(a[i][1])+y;          
          x=0;
          y=0;
          }
          return 0;
}