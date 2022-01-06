#include <bits/stdc++.h>
using namespace std;

int main() 
{
          int n,i,j,arr[1010],temp;
          cin>>n;
          for(i=0; i<n; i++)
          {
                    arr[i]=i+1;
          }
          if(n==1)
          {
                    cout<<1;
                    return 0;
          }
          for(i=n-2; i>=0; i--)
          {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
          }
          for(i=0; i<n; i++)
          {
                    cout<<arr[i]<<" ";
          }
          return 0;
}