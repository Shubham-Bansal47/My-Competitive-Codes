#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,i,j,x=0,y=0,a,b,temp,temp1;
    cin>>s>>n;
    int arr[n][2];
    for(i=0; i<n; i++)
    {
              for(j=0; j<2; j++)
              {
                        cin>>arr[i][j];
              }
    }
    for(i=0; i<n-1; i++)
    {
              for(j=0; j<n-1-i; j++)
              {
                        if(arr[j][0]>arr[j+1][0])
                        {
                                  temp=arr[j][0];
                                  arr[j][0]=arr[j+1][0];
                                  arr[j+1][0]=temp;
                                  temp1=arr[j][1];
                                  arr[j][1]=arr[j+1][1];
                                  arr[j+1][1]=temp1;
                        }
              }
    }
    for(i=0; i<n; i++)
    {
              if(s>arr[i][0])
              {
                        s=s+arr[i][1];
              }
              else
              {
                        cout<<"NO";
                        return 0;
              }
    }
    cout<<"YES";
    
    
    return 0;
}