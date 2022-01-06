#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int n,m,i,j,count=0,x=0,y=0;
          cin>>n>>m;
          long long int arr[m+10];
          for(i=0; i<m; i++)
          {
                    cin>>arr[i];
          }
          for(i=0; i<m-1; i++)
          {
                             if(arr[i]<=arr[i+1] && i==0)
                             {
                                       count+=arr[i+1]-1;
                             }
                             else if(arr[i]>arr[i+1] && i==0)
                             {
                                       count+=(arr[i]-1)+(n-arr[i])+(arr[i+1]-1)+1;
                             }
                             else if(arr[i]<=arr[i+1])
                             {
                                       count+=arr[i+1]-arr[i];
                             }
                             else if(arr[i]>arr[i+1])
                             {
                                       count+=(n-arr[i])+(arr[i+1]-1)+1;
                             }
          }
          cout<<count;
          return 0;
}