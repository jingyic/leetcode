class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256,-1);
        int start = 0;
        int maxlen = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(m[s[i]] == -1 || m[s[i]]<start)
            {
                maxlen = max(maxlen,i-start+1);
                //m[s[i]] = i;
            }
                
            else
            {
                start = m[s[i]];
                
            }
            
            m[s[i]] = i+1;
        }
        
        return maxlen;
    }
};