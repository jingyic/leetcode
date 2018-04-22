class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        
        int n = nums.size();
        int* max_first = new int[n];
        int* max_nonf = new int[n];
        max_first[0] = nums[0];
        max_first[1] = nums[0];
        for(int i = 2;i<n-1;i++)
        {
            max_first[i] = max(max_first[i-1],max_first[i-2]+nums[i]);
        }
        max_first[n-1] = max_first[n-2];
        max_nonf[0] = 0;
        max_nonf[1] = nums[1];
        for(int i = 2;i<n;i++)
        {
            max_nonf[i] = max(max_nonf[i-1],max_nonf[i-2]+nums[i]);
        }
        return max(max_first[n-1],max_nonf[n-1]);
            
        
    }
};