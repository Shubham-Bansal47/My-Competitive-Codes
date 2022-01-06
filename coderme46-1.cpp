#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int i,j,k,l=0,n,m,t,x,y,a,b,c;
          char arr[110][110];
          vector<char> vec[100];
          cin>>t;                              
          for(i=0; i<t; i++)
          {
                    cin>>n>>m;
                    cin>>x>>y;
                    for(j=0; j<n; j++)
                    {
                              for(k=0; k<m; k++)
                              {
                                        cin>>arr[j][k];
                                        vec[j].push_back(arr[j][k]);
                              }
                              a=count(vec[j].begin(),vec[j].end(),'U');
                              b=count(vec[j].begin(),vec[j].end(),'P');
                              c=count(vec[j].begin(),vec[j].end(),'F');code
                              if(c>=x || (c==(x-1) && b>=y))
                              {
                                        arr[l]=1;
                                        l++;
                              }
                              else
                              {
                                        arr[l]=0;
                                        l++;
                              }
                    cout<<arr[l];
                    vec[j].clear();
                    }
          }
          return 0;
}