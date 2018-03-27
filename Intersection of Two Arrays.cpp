class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        if(nums1.size()==0||nums2.size()==0) return v;
        
        sort(nums2.begin(),nums2.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        sort(nums1.begin(),nums1.end());
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        
        for(int i = 0;i<nums2.size();i++)
        {
            int left = 0;
            int right = nums1.size()-1;
            while(left<=right)
            {
                int mid = left+(right-left)/2;
                if(nums1[mid] == nums2[i]) 
                {
                    v.push_back(nums2[i]);
                    break;
                }
                else if(nums1[mid] <nums2[i])
                    left = mid+1;
                else if(nums1[mid]>nums2[i])
                    right = mid-1;    
            }
            
        }
        return v;

    }
};