#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,count=0;
          string a,b;
          cin>>a;
          cin>>b;
          reverse(b.begin(),b.end());
          if((b.compare(a))==0)
          {
                    cout<<"YES";
          }
          else
          {
                    cout<<"NO";
          }
          return 0;
}