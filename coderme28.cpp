#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,n,arr[1100][3],count=0,count1=0;
          cin>>n;
          for(i=0; i<n; i++)
          {
                    for(j=0; j<3; j++)
                    {
                              cin>>arr[i][j];
                    }
          }
          for(i=0; i<n; i++)
          {
                    for(j=0; j<3; j++)
                    {
                              count+=arr[i][j];
                    }
                    if(count==2 || count==3)
                    {
                              count1++;                   
                    }
                    count=0;
          }
          cout<<count1;
          return 0;
}