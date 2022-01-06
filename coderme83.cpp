#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x=0,y=0,a,b,c,min1;
    cin>>n>>a>>b>>c;
    int arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    sort(arr,arr+3);
    while(n>=arr[0])
    {
          if(n>=arr[0])
          {
                    ++x;
                    n=n-arr[0];
          }
          else
          {
                    cout<<x;
                    return 0;
          }
          if(n>=arr[1])
          {
                    ++x;
                    n=n-arr[1];
          }
          else 
          {
                    cout<<x;
                    return 0;
          }
          if(n>=arr[2])
          {
                    ++x;
                    n=n-arr[2];
          }
          else 
          {
                    cout<<x;
                    return 0;
          }
    } 
    cout<<x;
    return 0;
}