#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,max=0;
        cin>>n;
        set<int> se;
        int sorted[n],original[n],ans[n];
        for(i=0; i<n; i++)
        {
            cin>>sorted[i];
            original[i]=sorted[i];
            if(max<sorted[i])
            {
                max=sorted[i];
            }
        }
        sort(sorted,sorted+n);
        if(sorted[0]!=1)
        {
            for(i=0; i<n; i++)
            {
                ans[i]=sorted[i]+i;
            }  
        }
        else 
        {
            int y;
            for(i=0; i<n; i++)
            {
                if(sorted[i]==1)
                {
                    ans[i]=0;
                }
                else
                {
                    y=i;
                    break;
                }
            }
            int x=1;
            for(i=y; i<n; i++)
            {
                if(((sorted[i]+x)%sorted[i])<x)
                {
                    ans[i]=0;
                }
                else
                {
                    ans[i]=sorted[i]+x;
                    ++x;
                }    
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
    }
	return 0;
}
