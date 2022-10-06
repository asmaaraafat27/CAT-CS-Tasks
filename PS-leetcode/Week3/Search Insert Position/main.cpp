class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int m=0;
        for(int i=0; i<nums.size(); i++)
        {
            m = lower_bound(nums.begin(),nums.end(), target)-nums.begin();
        }
        return m;
    }
};
