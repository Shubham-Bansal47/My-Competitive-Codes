#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
          int n,h;
          cin>>n>>h;
          int arr[n];
          for(int i=0; i<n; i++)
                    cin>>arr[i];
          
          int x=0;
          for(int i=0; i<n; i++)
          {
                    if(arr[i]<=h)
                              x++;
                    else
                              x+=2;
          }
          cout<<x;
          return 0;
}