class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min= INT_MAX;
        int maxP=INT_MIN;
        int n = prices.size();

        min = prices[0];
        for(int i=1; i<n;i++){
            if((prices[i] - min) > maxP){
                maxP =  prices[i] - min;
            }
            if(min > prices[i]){
                min = prices[i];
            }
        }

        if(maxP > 0) return maxP;
        return 0;
    
    }
};
