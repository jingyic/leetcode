lass Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        if(nums.size()==0) return -1;
        int left = 0;
        int right = 0;
        for(int i = 0;i<nums.size();i++)
        {
            left = max(left,nums[i]);
            right += nums[i];
                
        }
        if(m == 1) return right;
        if(m == nums.size()) return left;
        
        while(left<right)
        {
            int mid = left+(right-left)/2;
            if(split(nums,m,mid)) right = mid;
            else left = mid+1;
        }
        return left;
    }
    
    bool split(vector<int>& nums,int m,int mid)
    {
        int count = 1;
        int sum = 0;
        for(int i = 0;i<nums.size();i++)
        {
            sum += nums[i];
            if(sum>mid)
            {
                sum = nums[i];
                count++;
            }
            if(count>m) return false;
        }
        return true;
    }
};