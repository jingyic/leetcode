class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];

        int maxlast = nums[0];
        int maxsum = max(nums[0],nums[1]);
        
        for(int i = 2;i<nums.size();i++)
        {
            int tmp = maxsum;
            maxsum = max(nums[i]+maxlast, maxsum);
            maxlast = tmp;
        }
        
        return maxsum;
    }
};