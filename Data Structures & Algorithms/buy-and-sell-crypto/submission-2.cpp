class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=prices[0];
        int maxprofit=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]<cp){
                cp=prices[i];
                


            }
            else{
               int profit=prices[i]-cp;
                if(profit>maxprofit){
                    maxprofit=profit;
                }
            }
        }
        return maxprofit;
        
        
        
    }
};
