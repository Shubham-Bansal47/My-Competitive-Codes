#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,n,m,x=0,y=0,min,max;
          cin>>n>>m;
          int arr[n],arr1[m];
          for(i=0; i<n; i++)
                    cin>>arr[i];
          
          for(i=0; i<m; i++)
                    cin>>arr1[i];
                    
          sort(arr1,arr1+m);
          min=arr[0];
          max=arr[0];
          for(i=0; i<n; i++)
          {
                    if(min>arr[i])
                    {
                              min=arr[i];
                    }
                    if(max<arr[i])
                    {
                              max=arr[i];
                    }
          }
          if(2*min<=max)
          {
                    if(max<arr1[0])
                    {
                              cout<<max;
                    }
                    else 
                    {
                              cout<<-1;
                    }
          }
          else 
          {
                    max=2*min;
                    if(max<arr1[0])
                    {
                              cout<<max;
                    }
                    else 
                    {
                              cout<<-1;
                    }
          }
              
          return 0;
}