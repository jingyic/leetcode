class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int jinwei = 1;
        for(int i = n-1; i >= 0 ; i--)
        {
           int temp = digits[i] + jinwei;
            digits[i] = temp % 10;
            jinwei = temp / 10;
        }
        if(jinwei == 1)
        {
           // for(int i = n-1;i >= 0;i--)
            //{
              //  digits[i+1] = digits[i];
            //}
            //digits[0] = 1;
           digits.insert(digits.begin(),1);
        }
        
        return digits;
       
    }
};