class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto res = nums;
        int post =1;
        for(int i=1; i<nums.size(); i++)
        {
            res[i] *= res[i-1];
        }
        for(int i=nums.size()-1; i>0; i--)
        {
            res[i] = post;
            res[i] *= res[i-1];
            post *= nums[i];
        }
        res[0] = post;
        return res;
    }
};
