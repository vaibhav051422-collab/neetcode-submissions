class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int mincp=prices[0];
        for(int i=1;i<prices.size();i++){
            
               int  profit=prices[i]-mincp;
                maxprofit=max(maxprofit,profit);
                mincp=min(mincp,prices[i]);


            
        }
        return maxprofit;
        
    }
};