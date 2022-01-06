#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    vector<char> vec;
    string s1,s2,s3,s4,s5;
    cin>>s1>>s2>>s3;
    s4=s3;
    for(i=0; i<s1.length(); i++)
    {
        for(j=0; j<s3.length(); j++)
        {
            if(s1[i]==s3[j])
            {
                vec.push_back(s1[i]);
                s3[j]=' ';
                break;
            }
        }
    }
    for(i=0; i<s2.length(); i++)
    {
        for(j=0; j<s3.length(); j++)
        {
            if(s2[i]==s3[j])
            {
                vec.push_back(s2[i]);
                s3[j]=' ';
                break;
            }
        }
    }
    s5(vec.begin(), vec.end());
    if(s4==s5 && s4.size()==s5.size())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}