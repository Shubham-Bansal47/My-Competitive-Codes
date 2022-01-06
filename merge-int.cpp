#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,temp;
        vector<vector<int>> intervals;
        for(i=0; i<intervals.size()-1; i++)
        {
            if(intervals[i][1]>=intervals[i+1][0] && intervals[i][1]<intervals[i+1][1])
            {
                temp=intervals[i+1][1];
                intervals[i+1].clear();
                intervals[i].pop_back();
                intervals[i].push_back(temp);
                --i;
            }
            else if(intervals[i][1]>=intervals[i+1][1])
            {
                temp=intervals[i][1];
                intervals[i+1].clear();
                --i;
            }
        }
        for(i=0; i<intervals.size(); i++)
        {
            for(j=0; j<intervals[i].size(); j++)
            {
                cout<<intervals[i][j]<<" ";
            }
            cout<<endl;
        }
}