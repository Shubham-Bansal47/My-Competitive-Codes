#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,i,j,x=0,y=0,a,b,min1=0,min2=0;
          cin>>n;
          int arr[n];
          min1=abs(arr[i]-arr[i+1]);
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
          }
          min2=abs(arr[n-1]-arr[0]);
          for(i=0; i<n-1; i++)
          {
                    if(min1>abs(arr[i]-arr[i+1]))
                    {
                              min1=abs(arr[i]-arr[i+1]);
                              a=i+1;
                    }
          }
          if(min1<min2)
          {
                    cout<<a<<" "<<a+1;
          }
          else
          {
                    cout<<n<<" "<<1;
          }
          
          return 0;
}