class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        if(numbers.size()==0) return v;
        
        for(int i = 0;i<numbers.size();i++)
        {
            if(target<numbers[i]) return v;
            
            int left = i+1;
            int right = numbers.size()-1;
            while(left<=right)
            {
                int mid = left+(right-left)/2;
                if(numbers[mid]==target-numbers[i])
                {
                    v.push_back(i+1);
                    v.push_back(mid+1);
                    return v;
                }
                else if(numbers[mid]<target-numbers[i])
                    left = mid+1;
                else
                    right = mid-1;
            }
        }
        return v;

    }
};