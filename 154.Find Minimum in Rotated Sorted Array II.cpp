class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0) return -1;
        if(nums.size()==1) return nums[0];
        int left = 0;
        int right = nums.size()-1;
       
        //有可重复的数字，当左右相等无法判断时，可舍弃左边的数，left++（3,3,1,3）
        //当left=right时，说明数组整体都相等
        while(left<right)
        {
            int mid = left+(right-left)/2;
            if(nums[left]<nums[right]) return nums[left];
            else if(nums[left]==nums[right]) left = left+1;
            else if(nums[left]>nums[right])
            {
                if(nums[left]<=nums[mid])
                    left = mid+1;
                else
                    right = mid;
            }
        }
        if(left==right) return nums[left];
    }
};