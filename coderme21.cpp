#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,x=0,y=0,c=0,d=0,n,arr[100000][2];
    int j,count=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>arr[i][j];
                 
        }
        if(arr[i][0]==0)
        {
                  x++;
        }
        else if(arr[i][0]==1)
        {
                  y++;
        }
        if(arr[i][1]==0)
        {
                  c++;
        }
        else if(arr[i][1]==1)
        {
                  d++;
        }
    }
              if(x>=y && x!=n && y!=n)
              {
                    count=y;       
              }
              else if(y>x && x!=n && y!=n)
              {
                    count=x;
              }
              if(c>=d && c!=n && d!=n)
              {
                    count+=d;
              }
              else if(d>c && c!=n && d!=n)
              {
                    count+=c;
              }
    cout<<count;

    return 0;
}