class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits == "")
            return res;
        vector<string> dig(10);
        dig[0] = "";
        dig[1] = "";
        dig[2] = "abc";
        dig[3] = "def";
        dig[4] = "ghi";
        dig[5] = "jkl";
        dig[6] = "mno";
        dig[7] = "pqrs";
        dig[8] = "tuv";
        dig[9] = "wxyz";
        
        int n = digits.size();
        string curr;
        dfs(res, curr, digits, 0,dig);
        return res;
    }
    void dfs(vector<string>& res, string& curr, string digits, int index,vector<string> dig)
    {
        //cout<<res<<endl;
        if(index == digits.size())
        {
            res.push_back(curr);
            return;
        }
            
        //string temp = dig[digits[index]-'0'];
        char strAt = digits[index];
        for(int i = 0;i<dig[strAt-'0'].size();i++)
        {
            string temp = curr;
            
            curr += dig[strAt-'0'][i];
            dfs(res,curr,digits,index+1,dig);
            curr = temp;
        }
    }
};