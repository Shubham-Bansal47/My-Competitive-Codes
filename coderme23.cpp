#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int s1,s2,s3,s4,i;
    int count=0;
    cin>>s1>>s2>>s3>>s4;
    if(s1==s2 && s1==s3 && s1==s4)          // 1 2 3 4
    {
              cout<<3;
    }
    else if((s1==s2 && s1==s3) || (s1==s3 && s1==s4) || (s2==s3 && s2==s4) || (s1==s4 && s2==s4) || (s1==s4 && s2==s3) || (s2==s4 && s3==s4) || (s1==s3 && s2==s4) || (s1==s2 && s3==s4))
    {
              cout<<2;
    }
    else if(s1==s2 || s1==s3 || s1==s4 || s2==s3 || s2==s4 || s3==s4)
    {
              cout<<1;
    }
    else 
    {
              cout<<0;
    }
    return 0;
}