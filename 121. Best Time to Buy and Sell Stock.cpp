class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        
        if(prices.size()==1) return 0;
        int min=prices[0];
        int maxpro = 0;
        for(int i = 1;i<prices.size();i++)
        {
            if(prices[i] < min)
                min = prices[i];
            else if(prices[i] > min)
            {
                int pro = prices[i] - min;
                if(pro>maxpro)
                    maxpro = pro;
            }
        }
        return maxpro;
        
    }
};