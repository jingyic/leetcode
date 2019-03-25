class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        if(nums1.size()==0||nums2.size()==0)
            return v;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j = 0;
        
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                v.push_back(nums2[j]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums1[i]>nums2[j])
                j++;

        }

        return v;
    }
};
//follow up:
//1.用上述的两个指针的方法，还不用排序；
//2.nums1用hash表的方法
//3.如果能放下nums1就使用第一种，做成hash表；如果两个数组都放不下，就外部排序然后使用两个指针