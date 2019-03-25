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
//1.������������ָ��ķ���������������
//2.nums1��hash��ķ���
//3.����ܷ���nums1��ʹ�õ�һ�֣�����hash������������鶼�Ų��£����ⲿ����Ȼ��ʹ������ָ��