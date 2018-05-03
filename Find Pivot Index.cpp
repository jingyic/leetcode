class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        if(len == 0)
            return -1;
        
        int sum = 0;
        for(int i = 0;i<len;i++)
        {
            sum += nums[i];        
        }
        
        int leftsum = 0;
        int j = 0;
        while(leftsum != (sum-leftsum-nums[j]) && j<len )
        {
            leftsum += nums[j];
            j++;
        }
        
        if(j<len)
            return j;
        else
            return -1;
    }
};