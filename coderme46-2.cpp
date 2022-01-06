#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int i,j,k,l=0,n,m,t,x,y,b=0,c=0,arr1[110][110];
          char arr[110][110];
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
                                        if(arr[j][k]=='F')
                                        {
                                                  ++c;
                                        }
                                        else if(arr[j][k]=='P')
                                        {
                                                  ++b;
                                        }
                                        
                              }
                              if(c>=x || (c==(x-1) && b>=y))
                              {
                                        arr1[i][l]=1;
                                        l++;
                              }
                              else
                              {
                                        arr1[i][l]=0;
                                        l++;
                              }
                              cout<<arr1[i][l];
                    
                              b=0;
                              c=0;
                              l=0;
                    }
          cout<<endl;          
          }
          return 0;
}