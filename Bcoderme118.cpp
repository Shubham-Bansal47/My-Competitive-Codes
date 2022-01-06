#include <bits/stdc++.h>
 using namespace std;
 
int main()
{
    int n,k,i,j,max,min,x,y,temp,temp1,count=0;
    cin>>n>>k;
    int arr[n][2];
    for(i=0; i<n; i++)
          cin>>arr[i][0]>>arr[i][1];
    
    for(i=0; i<n-1; i++)
    {
              for(j=i+1; j<n; j++)
              {
                        if(arr[i][0]<arr[j][0])
                        {
                                temp=arr[i][0];
                                arr[i][0]=arr[j][0];
                                arr[j][0]=temp;
                                
                                 temp1=arr[i][1];
                                arr[i][1]=arr[j][1];
                                arr[j][1]=temp1;
                        }
                        else if(arr[i][0]==arr[j][0])
                        {
                                  if(arr[i][1]>arr[j][1])
                                  {
                                            temp=arr[i][1];
                                            arr[i][1]=arr[j][1];
                                            arr[j][1]=temp;
                                  }
                        }
              }
    }
    x=arr[k-1][0];
    y=arr[k-1][1];
    for(i=0; i<n; i++)
    {
              if(arr[i][0]==x && arr[i][1]==y)
              {
                        ++count;
              }
    }
    cout<<count;
                    
    return 0;
}