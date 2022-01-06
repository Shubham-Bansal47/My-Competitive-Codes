#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,k,i,j,a,b,c,d,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,max1;
    cin>>k;
    string s[4];
    for(i=0; i<4; i++)
    {
              cin>>s[i];
    }
    for(i=0; i<4; i++)
    {
              for(j=0; j<4; j++)
              {
                        if(s[i][j]=='1')
                        {
                                  ++c1;
                        }
                        else if(s[i][j]=='2')
                        {
                                  ++c2;
                        }
                        else if(s[i][j]=='3')
                        {
                                  ++c3;
                        }
                        else if(s[i][j]=='4')
                        {
                                  ++c4;
                        }
                        else if(s[i][j]=='5')
                        {
                                  ++c5;
                        }
                        else if(s[i][j]=='6')
                        {
                                  ++c6;
                        }
                        else if(s[i][j]=='7')
                        {
                                  ++c7;
                        }
                        else if(s[i][j]=='8')
                        {
                                  ++c8;
                        }
                        else if(s[i][j]=='9')
                        {
                                  ++c9;
                        }
              }
    }
    if(c1<=2*k && c2<=2*k && c3<=2*k && c4<=2*k && c5<=2*k && c6<=2*k && c7<=2*k && c8<=2*k && c9<=2*k)
    {
              cout<<"YES";
    }
    else 
    {
              cout<<"NO";
    }
    
    return 0;
}