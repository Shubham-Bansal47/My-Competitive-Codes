#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i,j,count,m;
          for(i=0; i<5; i++)
          {
                    for(j=0; j<5; j++)
                    {
                              cin>>m;
                              if(m)
                              count=abs(2-i)+abs(2-j);
                    }
          }
          cout<<count;
          
          return 0;
}