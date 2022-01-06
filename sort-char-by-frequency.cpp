#include<bits/stdc++.h>
using namespace std;

int main()
{
        string s;
        cin>>s;
        int i,j;
        map<char,int> m;
        vector<char> ch;
        vector<int> in;
        for(i=0; i<s.size(); i++)
        {
            m[s[i]]++;
        }
        for(i=0; i<s.size(); i++)
        {
            if(m[s[i]]==-1)
            {
                continue;
            }
            ch.push_back(s[i]);
            in.push_back(m[s[i]]);
            m[s[i]]=-1;
        }
        int temp;
        char temp1;
        for(i=0; i<in.size()-1; i++)
        {
            for(j=i+1; j<in.size(); j++)
            {
                if(in[i]>in[j])
                {
                    swap(in[i],in[j]);
                    swap(ch[i],ch[j]);
                }
            }
        }
        string x="";
        for(i=0; i<in.size(); i++)
        {
            for(j=0; j<in[i]; j++)
            {
                x=x+ch[i];
            }
        }
        reverse(x.begin(),x.end());
        cout<<x;
}