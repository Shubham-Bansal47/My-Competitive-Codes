#include<bits/stdc++.h>
using namespace std;
int main()
{
          
          long long int i,j,n,sum=0;
          cin>>n;
          long long int arr[n];
          for(i=0; i<n; i++)
                    cin>>arr[i];
          
          sort(arr,arr+n);
          for(i=0;i<n-1; i++)
                    sum+=(arr[n-1]-arr[i]);
          
          if(sum%n==0)
          {
                    cout<<n;
          }
          else
          {
                    cout<<n-1;
          }
          return 0;
}