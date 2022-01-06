#include<bits/stdc++.h>
using namespace std;
int main()
{
          int k,n,w,a,b;
          cin>>k>>n>>w;
          a=((w*(w+1))/2)*k;
          if(n<a)
          {
                    cout<<a-n;
          }
          else
          {
                    cout<<0;
          }
          return 0;
}