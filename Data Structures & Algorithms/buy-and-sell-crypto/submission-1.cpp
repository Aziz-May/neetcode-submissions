class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        int max_profit=0; 
        int min=prices[0];
        
        
        for(int i =1 ; i <prices.size();i++){
            if(prices[i]<min){
                min= prices[i];
            }
            profit=prices[i]-min ; 
            if(profit>max_profit){
                max_profit=profit;
            }

        }
        return max_profit;
            
    }
};
