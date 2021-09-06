
#include<bits/stdc++.h>
class Solution {
public:

    bool static cmp(vector<int> &a , vector<int> &b)
{
    return a[1] < b[1];
}

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);

        int s = points[0][1];
        int i=0,c=1;
        for(i=1;i<points.size();i++)
        {
            if(points[i][0]<=s&&points[i][1]>=s)
                continue;
            else
            {
                c++;
                s=points[i][1];
            }
        }
        return c;
    }
};
int main()
{
Int n;
vector<vector<int>>points;
cin>>n;
for(int i=0;i<n;i++)
{
for(int j=0;j<2;j++)
{
cin>>points[i][j];
}
}
int ans=findMinArrowShots(points);
cout<<ans;
return 0;
}
