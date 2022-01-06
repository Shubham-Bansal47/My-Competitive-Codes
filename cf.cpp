#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,sum=0,ab=0,ba=0;
        string s;
        cin>>s;
        for(i=0; i<s.size()-1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
            {
                ++ab;
            }
            else if(s[i]=='b' && s[i+1]=='a')
            {
                ++ba;
            }
        }
        if(ab==ba)
        {
            cout<<s<<"\n";
        }
        else if(ab>ba)
        {
                for(i=0; i<s.size()-1; i++)
                {
                    if(s[i]=='a' && s[i+1]=='b')
                    {
                        s[i]='b';
                        --ab;
                    }
                    if(ab==ba)
                    {
                        break;
                    }
                
                }
                if(ab!=ba)
                {
                    for(i=0; i<s.size()-1; i++)
                    {
                        if(s[i]=='a' && s[i+1]=='a')
                        {
                            s[i]='b';
                            ++ba;
                        }
                        else if(s[i]=='b' && s[i+1]=='b')
                        {
                            s[i+1]='a';
                            ++ba;
                        }
                        if(ab==ba)
                        {
                            break;
                        }
                    }
                }
            cout<<s<<"\n";
        }
        else
        {
                for(i=0; i<s.size()-1; i++)
                {
                    if(s[i]=='b' && s[i+1]=='a')
                    {
                        s[i+1]='b';
                        --ba;
                    }
                    if(ab==ba)
                    {
                        break;
                    }
                }
                if(ab!=ba)
                {
                    for(i=0; i<s.size()-1; i++)
                    {
                        if(s[i]=='a' && s[i+1]=='a')
                        {
                            s[i+1]='b';
                            ++ab;
                        }
                        else if(s[i]=='b' && s[i+1]=='b')
                        {
                            s[i]='a';
                            ++ab;
                        }
                        if(ab==ba)
                        {
                            break;
                        }
                    }
                }
            cout<<s<<"\n";
        }
    }
    return 0;
}