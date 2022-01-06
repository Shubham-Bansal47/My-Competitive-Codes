#include <bits/stdc++.h>
using namespace std;
 
int main()
{
          long long int n,i,j,x=0,y=0,min,max;
          cin>>n;
          long long int arr[n][2];
          for(i=0; i<n; i++)
          {
                    cin>>arr[i][0]>>arr[i][1];
          }
          min=arr[0][0];
          max=arr[0][1];
          for(i=0; i<n; i++)
          {
                    if(min>arr[i][0])
                    {
                              min=arr[i][0];
                    }
                    if(max<arr[i][1])
                    {
                              max=arr[i][1];
                    }
          }
          for(i=0; i<n; i++)
          {
                    if(arr[i][0]==min && arr[i][1]==max)
                    {
                              cout<<i+1;
                              return 0;
                    }
          }
          cout<<-1;
          
          return 0;
}