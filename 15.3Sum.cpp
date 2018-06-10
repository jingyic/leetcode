class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        if(nums.size() == 0)
            return v;
        sort(nums.begin(),nums.end());
        if(nums[0]>0||nums[nums.size()-1]<0||nums.size()<3)
            return v;
        
        for(int i =0;i<nums.size()-2;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            
            int begin = i+1;
            int end = nums.size()-1;
            int val = -nums[i];
            while(begin<end)
            {
                if(nums[begin]+nums[end]>val)
                    end--;
                else if(nums[begin]+nums[end]<val)
                    begin++;
                else
                {
                    vector<int> v1;
                    v1.push_back(nums[i]);
                    v1.push_back(nums[begin]);
                    v1.push_back(nums[end]);
                    v.push_back(v1);
                    v1.clear();
                    do
                    {
                        begin++;
                    }while(nums[begin] == nums[begin-1]);
                    do
                    {
                        end--;
                    }while(nums[end] == nums[end+1]);
                }

            }
        }
        return v;
    }
};