#include<bits/stdc++.h>
using namespace std;
int main()
{
          string s;
          cin>>s;
          if(s[0]=='A' || s[0]=='B' || s[0]=='C' || s[0]=='D' || s[0]=='E' || s[0]=='F' || s[0]=='G' || s[0]=='H' || s[0]=='I' || s[0]=='J' || s[0]=='K' || s[0]=='L' || s[0]=='N' || s[0]=='M' || s[0]=='O' || s[0]=='P' || s[0]=='Q' || s[0]=='R' || s[0]=='S' || s[0]=='T' || s[0]=='U' || s[0]=='V' || s[0]=='W' || s[0]=='X' || s[0]=='Y' || s[0]=='Z')
          {
                    cout<<s;
          }
          else
          {
                    s[0]=toupper(s[0]);
                    cout<<s;
          }
          
          return 0;
}