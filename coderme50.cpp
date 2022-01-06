#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,t,n,y=0;
          long long int arr[310];
          vector<int> vec;
          cin>>t;
          for(i=0; i<t; i++)
          {
                    int x=0,y=0;             //3 1 4 1 5 9 2
                    cin>>n;
                    y=n;
                    for(j=0; j<n; j++)
                    {
                              cin>>arr[j];
                    }
                    if(n%2==0)
                    {
                              for(j=0; j<(n+1)/2; j++)
                              {
                                                  vec.push_back(arr[j]);
                                                  vec.push_back(arr[n-j-1]);
                              }
                    }
                    else
                    {
                              for(j=0; j<(n+1)/2; j++)
                              {
                                        vec.push_back(arr[j]);
                                        if(j!=(n-1)/2)
                                        {
                                                  vec.push_back(arr[n-j-1]);
                                        }
                              }
                    }
                    for(j=0; j<n; j++)
                    {
                         cout<<vec[j]<<" ";     
                    }
          vec.clear();
          cout<<endl;
          }
          return 0;
}