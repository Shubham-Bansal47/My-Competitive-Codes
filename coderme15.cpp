#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i;
          string a,b;
          cin>>a;
          cin>>b;
          for(i=0; i<a.length(); i++)
          {
                    if((a[i]=='1' && b[i]=='1') || (a[i]=='0' && b[i]=='0'))
                    {
                              cout<<0;
                    }
                    else
                    {
                              cout<<1;
                    }          
          }
          return 0;
}