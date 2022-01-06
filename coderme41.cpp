#include<bits/stdc++.h>
using namespace std;
int main()
{
          int a,b,i,count=0;
          cin>>a>>b;
          for(i=0; a<=b; i++)
          {
                    if(a<=b)
                    {
                              a=a*3;
                              b=b*2;
                              ++count;
                    }
          }
          cout<<count;
}