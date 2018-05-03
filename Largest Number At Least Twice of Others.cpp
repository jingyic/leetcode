class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) 
            return -1;
        
        float large = 0.0;
        float seclarge = 0.0;
        vector<int> v;
        int j;
        for(int i = 0;i<len;i++)
        {
            if(nums[i]>large)
            {
                //float temp = large;
                large = float(nums[i]);
                j = i;
            }
        }
        for(int i = 0;i<len;i++)
        {
            if(i == j)
                continue;
            if(seclarge < nums[i])
                seclarge = nums[i];
        }
        if(seclarge == 0)
            return j;
        
       float x = large/seclarge;
        if(x>=2)
            return j;
        else
            return -1;
    }
};