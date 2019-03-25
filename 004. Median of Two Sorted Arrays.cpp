class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size()-1;
        int n = nums2.size()-1;
        
        int k = (m+n+2)/2;
        if((m+n+2)%2 == 0)
            return (findKth(nums1,nums2,0,0,m,n,k)+findKth(nums1,nums2,0,0,m,n,k+1))/2;
        else
            return findKth(nums1,nums2,0,0,m,n,k+1);
    }
    
    double findKth(vector<int> &nums1,vector<int> &nums2,int low1,int low2,int high1,int high2,int k)
    {
        int len1 = high1-low1+1;
        int len2 = high2-low2+1;
        
        if(len1>len2)
            return findKth(nums2,nums1,low2,low1,high2,high1,k);
        if(len1 == 0)
            return nums2[low2+k-1];
        if(k==1)
            return min(nums1[low1],nums2[low2]);
        
        int p = min(k/2,len1);
        int q = k-p;
        if(nums1[low1+p-1]<nums2[low2+q-1])
            return findKth(nums1,nums2,low1+p,low2,high1,high2,k-p);
        else if(nums1[low1+p-1] == nums2[low2+q-1])
            return nums1[low1+p-1];
        else
            return findKth(nums1,nums2,low1,q+low2,high1,high2,k-q);
    }
};