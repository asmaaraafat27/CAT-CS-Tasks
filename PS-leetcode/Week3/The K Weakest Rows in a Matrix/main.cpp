class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int count =0;
        priority_queue<pair<int , int >>p;
        for(int i=0; i<mat.size(); i++)
        {
            count =0;
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j] == 1)
                {
                    count ++;
                }
            }
            p.push({count, i});
            if(p.size()>k)
            {
                p.pop();
            }
        }
        vector<int>v(k);
        int m=k-1;
        while(p.size()>0)
        {
            v[m]=p.top().second;
            m--;
            p.pop();
        }
        return v;
    }
};
