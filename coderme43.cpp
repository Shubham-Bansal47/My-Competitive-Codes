#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,t,n,a,x=0,y=0;
          set<int> s;
          cin>>t;
          for(i=0; i<t; i++)
          {
                    cin>>n;
                    for(j=0; j<n; j++)
                    {
                              cin>>a;
                              s.insert(a);
                    }
                    if(s.size()<n)
                    {
                              cout<<"YES"<<endl;
                    }
                    else
                    {
                              cout<<"NO"<<endl;
                    }
                    s.clear();
          }
          return 0;
}