#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    vector<char> vec;
    string s1,s2,s3,s4,s5;
    cin>>s1>>s2>>s3;
    s4=s3;
    s5=s1+s2;
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
                break;                         //santa claus santaclaus
            }
        }
    }
    if(s4.size()==s5.size())
    {
        for(i=0; i<s4.size(); i++)
        {
            if(vec[i]!=s5[i])
            {
                cout<<"NO";
                break;
            }
            else if(i==(s4.size()-1) && vec[i]==s5[i])
            {
                cout<<"YES";
            }
        }
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}