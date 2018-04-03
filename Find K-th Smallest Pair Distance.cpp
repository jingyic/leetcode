class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        //vector<int> v;
        if(nums.size()==0) return -1;
        
        sort(nums.begin(),nums.end());
        int low = 0;
        int high = nums.back()-nums[0];
        
        while(high>low)
        {
            int mid = low+(high-low)/2;
            int left = 0;
            int count = 0;
            for(int right = 0;right<nums.size();right++)
            {
                while(nums[right]-nums[left]>mid&&left<nums.size())
                {
                    left++;
                }
                count += right-left;
                    
            }
            if(count>=k)
                high = mid;
            else if(count<k)
                low = mid+1;
        }
        return high;

        
    }
};