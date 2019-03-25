class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> v;
        if(arr.size()==0) return v;
        
        int left = 0;
        int right = arr.size()-1;
        
        int index;
        if(x<=arr[0])
        {
            for(int i =0;i<k;i++)
            {
                v.push_back(arr[i]);
            }
            return v;
        }
        if(x>=arr[right])
        {
            for(int i = k-1;i>=0;i--)
                v.push_back(arr[right-i]);
            return v;
        }
        while(left<right)
        {
            int mid = left + (right-left)/2;
            if(arr[mid]==x) 
            {
                index = mid;
                break;
            }
            else if(arr[mid]<x&&x<arr[mid+1]) 
            {
                index = mid;
                break;
            }
            else if(arr[mid]>x) right = mid;
            else left = mid;
        }
        
        //int m;
        int y = k;
        int j = index+1;
        int i = index;
        while(y>0)
        {
            if(i==-1) break;
            if(j==arr.size())
            {
                i = arr.size()-k-1;
                break;
            }
            if(i>=0&&(x-arr[i])<=(arr[j]-x))
            {
                i--;
                y--;
            }
            else if(j<arr.size()&&(arr[j]-x)<(x-arr[i]))
            {
                j++;
                y--;
            }
            
        }
        for(int s =i+1;s<=i+k;s++ )
        {
            v.push_back(arr[s]);
        }
        return v;
    }
};