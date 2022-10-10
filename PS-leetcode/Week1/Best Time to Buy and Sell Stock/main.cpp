class Solution {
public:
    int maxProfit(vector<int>& p) {
       int ma=0, mi=p[0];
        for(int i=1; i<p.size(); i++)
        {
            ma= max(ma, (p[i]-mi));
            mi= min(mi, p[i]);
        }
        return ma;
    }
};
