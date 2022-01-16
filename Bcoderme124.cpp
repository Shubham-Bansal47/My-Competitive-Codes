#include<bits/stdc++.h>
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false);
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
using namespace std;

int main()
{
    FastIO;
    ll t;
    cin>>t;
    up:
    while(t--)
    {
          ll i,j,n,a,b,min,max,sum=0;
          string s,s3="";
          cin>>s;
            for(int k=s.size()-1; k>=1; k--)
            {
                    i=(ll)(s[k]-'0');
                    j=(ll)(s[k-1]-'0');
                    a=i+j;
                    if(a>9)
                    {
                        string s1="",s2="";
                        for(int x=0; x<k-1; x++)
                        {
                            s1+=s[x];
                        }
                        for(int x=k+1; x<s.size(); x++)
                        {
                            s2+=s[x];
                        }
                        cout<<s1<<a<<s2<<"\n";
                        goto up;
                    }
            }
            i=(ll)(s[0]-'0');
            j=(ll)(s[1]-'0');
            a=i+j;
            if(i+j<=i)
            {
                s3=s.substr(2);
                cout<<a<<s3<<"\n";
                goto up;
            }
            else
            {
                i=(ll)(s[s.size()-1]-'0');
                j=(ll)(s[s.size()-2]-'0');
                a=i+j;
                s3=s.substr(0,s.size()-2);
                cout<<s3<<a<<"\n";
                goto up;
            }

    }
}