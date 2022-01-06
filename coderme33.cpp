#include <bits/stdc++.h>>

using namespace std;

int main()
{
    int n,arr[200][2],i,j,x=0,y=0,z=0,w=0,count=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((arr[i][0]<arr[j][0]) && (arr[i][1]==arr[j][1]))
            {
                x++;
            }
            else if((arr[i][0]>arr[j][0]) && (arr[i][1]==arr[j][1]))
            {
                y++;
            }
            else if((arr[i][0]==arr[j][0]) && (arr[i][1]>arr[j][1]))
            {
                z++;
            }
            else if((arr[i][0]==arr[j][0]) && (arr[i][1]<arr[j][1]))
            {
                w++;
            }
        }
        if(x>=1 && y>=1 && z>=1 && w>=1)
            {
                count++;
            }
      x=0; 
      y=0;
      z=0;
      w=0;    
    }
    cout<<count;

    return 0;
}