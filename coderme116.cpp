#include<bits/stdc++.h>
using namespace std;
int main()
{
          
          long long int i,j,n,sum=25;
          cin>>n;
          long long int arr[n];
          for(i=0; i<n; i++)
                    cin>>arr[i];
          
          if(arr[0]!=25)
          {
                    cout<<"NO";
                    return 0;
          }
          long long int x=1,y=0,z=0;
          for(i=1; i<n; i++)
          {
                    sum+=arr[i];
                    if(arr[i]==25)
                    {
                              ++x;
                              continue;
                    }
                    else if(arr[i]==50)
                              ++y;
                    else 
                              ++z;
                    
                    if((arr[i]-25)<=sum)
                    {
                              if((arr[i]-25)==25)
                              {
                                        if(x>0)
                                        {
                                                  --x;
                                                  sum=sum-25;
                                        }
                                        else 
                                        {
                                                  cout<<"NO";
                                                  return 0;
                                        }
                              }
                              else if((arr[i]-25)==75)
                              {
                                        if(y>0 && x>0)
                                        {
                                                  --y;
                                                  --x;
                                                  sum=sum-75;
                                        }
                                        else if(x>2)
                                        {
                                                  x=x-3;
                                                  sum=sum-75;
                                        }
                                        else 
                                        {
                                                  cout<<"NO";
                                                  return 0;
                                        }
                              }
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