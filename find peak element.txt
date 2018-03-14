class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==0) return -1;
        if(nums.size()==1) return 0;
        int left = 0;
        int right = nums.size()-1;
        if(nums[0]>nums[1])return 0;
        if(nums[right]>nums[right-1]) return (right);
        while(left<=right)
        {
            int mid = left + (right-left)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
                return mid;
            else if(nums[mid+1]>nums[mid])
                left = mid+1;
            else if(nums[mid-1]>nums[mid])
                right = mid-1;
            
        }
        return -1;
    }
};