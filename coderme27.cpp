#include<bits/stdc++.h>
using namespace std;
int main()
{
          int i;
          string p;
          cin>>p;
          for(i=0; i<p.size(); i++)
          {
               if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
               {
                         cout<<"YES";
                         break;
               }
               else if(i==(p.size()-1))
               {
                         cout<<"NO";
               }
          }
          return 0;
}