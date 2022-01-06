#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{ 
        string s="abcabcbb";
        int i,j,n,ans=1,k;
        vector<char> vec;
        if(s.size()==0)
        {
            return 0;
        }
        vec.push_back(s[0]);
        i=0; 
        j=1;
        up:
        while(i<j && i<s.size()-1 && j==s.size())
        {
            for(k=0; k<vec.size(); k++)
            {
                if(vec[k]==s[j])
                {
                    i=j;
                    j=i+1;
                    goto up;
                }
            }
            vec.push_back(s[j]);
            ans=max(ans,j+1-i);
            ++j;
        }
        for(i=0; i<vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<ans;
}