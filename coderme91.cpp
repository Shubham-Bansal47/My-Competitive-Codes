#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,k,f,i,j,a,b,x=0,y=0,z=0,max1;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
              cin>>arr[i];
    }
    if(n==1)
    {
              cout<<"chest";
              return 0;
    }
    else if(n==2)
    {
              if(arr[0]>arr[1])
              {
                        cout<<"chest";
              }
              else
              {
                        cout<<"biceps";
              }
              return 0;
    }
    else
    {
              for(i=0; i<n; i++)
              {
                       a=i%3;
                       if(a==0)
                       {
                                 x+=arr[i];
                       }
                       else if(a==1)
                       {
                                 y+=arr[i];
                       }
                       else
                       {
                                 z+=arr[i];
                       }
              }
    }
    if(x>y)
    {
              if(y>z)
              {
                        cout<<"chest";
              }
              else
              {
                        if(z>x)
                        {
                                  cout<<"back";
                        }
                        else
                        {
                                  cout<<"chest";
                        }
              }
    }
    else
    {
              if(x>z)
              {
                        cout<<"biceps";
              }
              else
              {
                        if(z>y)
                        {
                                  cout<<"back";
                        }
                        else
                        {
                                  cout<<"biceps";
                        }
              }
    }
    return 0;
}