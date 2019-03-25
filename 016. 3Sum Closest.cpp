class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = INT_MAX;
        int answer = INT_MAX;
        sort(nums.begin(),nums.end());
        if(target<3*nums[0])
            return (nums[0]+nums[1]+nums[2]);
        if(target>3*nums[nums.size()-1])
            return (nums[nums.size()-1]+nums[nums.size()-2]+nums[nums.size()-3]);
        
        for(int i = 0;i<nums.size()-2;i++)
        {   
            if(i>0&&nums[i]==nums[i-1])
                continue;

            int left = i+1;
            int right = nums.size()-1;
            int val = target - nums[i];
            while(left<right)
            {
                if((nums[left]+nums[right])>val)
                {
                    
                    if(abs(nums[left]+nums[right]-val)<closest)
                    {
                        
                        closest = abs(nums[left]+nums[right]-val);
                        answer = nums[i]+nums[left]+nums[right];
                        
                        right--;
                    }
                    else
                        right--;

                }
                else if(nums[left]+nums[right]<val)
                {
                    if(abs(nums[left]+nums[right]-val)<closest)
                    {
                        closest = abs(nums[left]+nums[right]-val);
                        answer = nums[i]+nums[left]+nums[right];
                        left++;
                    }

                    else
                        left++;
                 
                }
                else
                {
                    
                    return target;
                }
            }
        }
        return answer;
        
    }
};