#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s;
        cin>>s;
        int i,j,ans=0,x=0;
        if(s.size()==0)
        {
            cout<<ans;
            return 0;
        }
        ans=1;
        unordered_map<char,int> m;
        m[s[0]]=1;
        i=0; 
        j=1;
        while(j<=s.size()-1)
        {
            m[s[j]]++;
            if(m[s[j]]==1)
            {
                ans=max(ans,j+1-i);
            }
            else
            {
                up:
                m[i]--;
                if(m[s[j]]==1)
                {
                    ans=max(ans,j-i);
                    ++i;
                }
                else
                {
                    ++i;
                    goto up;
                }
            }
            ++j;
        }
        cout<<ans;
        return 0;
}