class Solution {
public
    int findDuplicate(vectorint& nums) {
        if(nums.size()=1) return -1;
        
        ���������У����򷨻�ı�����˳�򲻿���
        ͨ�����ַ����򻯱����������ó���ԭ���Ƚ�mid����nums[mid]
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