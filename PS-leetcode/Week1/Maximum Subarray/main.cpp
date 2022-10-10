class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long n = nums[0];
        long long sum=n;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]>=0)
            {
                if(sum>=0)
                {
                    sum+=nums[i];
                }
                else
                {
                    sum = nums[i];
                }
                n= max(sum, n);
            }
            else
            {
                sum +=nums[i];
                if(nums[i]>n)
                {
                    n= nums[i];
                }
            }
        }
        return n;
    }
};
