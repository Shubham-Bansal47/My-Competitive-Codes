#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int n,arr[100010],arr1[100010],m,i,j,count=0,count1=0;
          cin>>n;
          for(i=0; i<n; i++)
          {
                    cin>>arr[i];
          }
          cin>>m;
          for(i=0; i<m; i++)                         //2
          {                                          //2 1  
                    cin>>arr1[i];                    //1
          }                                          //1
          for(i=0; i<m; i++)
          {
              for(j=0; j<n; j++)
              {
                  count++;
                  if(arr1[i]==arr[j])
                  {
                      break;
                  }
              }
          }
          for(i=0; i<m; i++)
          {
              for(j=n-1; j>=0; j--)
              {
                  count1++;
                  if(arr1[i]==arr[j])
                  {
                      break;
                  }
              }
          }
          cout<<count<<" "<<count1;
          return 0;
}