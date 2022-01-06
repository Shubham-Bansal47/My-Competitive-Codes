#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,k,f,i,j,a,b,x=0,y=0,max1;
    cin>>n>>k;
    long long int arr[n][2],arr1[n]; 
    for(i=0; i<n; i++)
    {
              for(j=0; j<2; j++)
              {
                        cin>>arr[i][j];
              }
    }
    for(i=0; i<n; i++)
    {
          if(arr[i][1]>k)
          {
                    arr1[y]=arr[i][0]-(arr[i][1]-k);
                    y++;
          }
          else
          {
                    arr1[y]=arr[i][0];
                    y++;
          }
    }
    max1=arr1[0];
    for(i=0; i<n; i++)
    {
              if(max1<arr1[i])
              {
                        max1=arr1[i];
              }
    }
    cout<<max1;
    
          
                    
    return 0;
}