class Solution {
public
    int findDuplicate(vectorint& nums) {
        if(nums.size()=1) return -1;
        
        暴力法可行，排序法会改变数组顺序不可行
        通过二分法，简化暴力法。运用抽屉原理，比较mid而非nums[mid]
        int left = 1;
        int right = nums.size();
        
        while(left=right)
        {
            int mid = left+(right-left)2;
            int count = 0;
            for(int i = 0;inums.size();i++)
            {
                if(nums[i]=mid)
                    count++;
            }
            
            if(countmid)
            {
                right = mid-1;
            }
            else
                left = mid+1;
        }
        return (left);
    }
};