class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
            return -1;
        int left = 0;
        int right = nums.size()-1;
        int mid = left+(right-left)/2;
        while(left<=right)
        {          
            mid = left+(right-left)/2;
            if(nums[mid] == target) return mid;
            if(nums[left]<=nums[right])
            {
                if(nums[mid] > target) right = mid-1;
                else left = mid+1;
            }
            else if(nums[left]<=nums[mid])
            {
                if(nums[mid]>target&&nums[left]<=target)
                    right = mid-1;
                else 
                    left = mid + 1;
            }
            else if(nums[mid]<=nums[right])
            {
                if(nums[mid]<target&&nums[right]>=target)
                    left = mid + 1;
                else
                    right = mid-1;
            }
        }
        return -1;
    }
};