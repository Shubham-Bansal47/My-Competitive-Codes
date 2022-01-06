#include <bits/stdc++.h>
 using namespace std;
 
int main()
{
    long long int i,j,t,n,x=0,w,y;
    cin>>t;
    for(i=0; i<t; i++)
    {
              cin>>n;
              long long int arr[n],arr1[n];
              for(j=0; j<n; j++)
                        cin>>arr[j];
              
              for(j=0; j<n; j++)
              {
                        while(arr[j]>0)
                        {
                                  ++x;
                                  arr[j]=arr[j]>>1;
                        }
                        arr1[j]=x;
                        x=0;
              }
              sort(arr1,arr1+n);
              if(arr1[0]==arr1[n-1])
              {
                        cout<<(n*(n-1))/2<<endl;
              }
              else
              {
                        long long int l=0,r=1,x=1,y=0;
                        while(l<r && l<(n-1) && r<n)
                        {
                                  if(arr1[l]==arr1[r])
                                  {
                                            ++x;
                                            ++r;
                                  }
                                  else 
                                  {
                                       y+=(x*(x-1))/2;
                                       x=1;
                                       l=r;
                                       r=l+1;
                                  }
                        }
                        y+=(x*(x-1))/2;
                        cout<<y<<endl;
              }
    }
    return 0;
}