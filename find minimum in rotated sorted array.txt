class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0) return -1;
        
        int left = 0;
        int right = nums.size()-1;
        int mid = left + (right-left)/2;
        while(left<=right)
        {
            mid = left + (right-left)/2;
            if(nums[left]<=nums[right]) return nums[left];
            else if(nums[left]<=nums[mid])
            {
                left = mid+1;
            }
            else if(nums[left]>=nums[mid])
                right = mid;
            

        }
    }
};