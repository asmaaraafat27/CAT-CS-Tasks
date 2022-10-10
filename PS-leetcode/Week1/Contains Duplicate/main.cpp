class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, long long>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        bool can = false;
        for(auto it: mp)
        {
            if(it.second >=2)
            {
                can = true;
            }
        }
        if(can)
            return true;
        else
            return false;
    }
};
