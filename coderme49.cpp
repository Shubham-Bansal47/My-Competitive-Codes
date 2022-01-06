#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,n;
          stack<char> stac;
          string k,s;
          cin>>k;
          for(i=0; i<k.size(); i++)
          {
                    if(stac.empty())
                    {
                              stac.push(k[i]);
                    }
                    else if(stac.top()==k[i])
                    {
                              stac.pop();
                    }
                    else
                    {
                              stac.push(k[i]);
                    }
          }
          while(!stac.empty())
          {
                    s.push_back(stac.top());
                    stac.pop();
          }
          reverse(s.begin(),s.end());
          cout<<s;
          return 0;
}