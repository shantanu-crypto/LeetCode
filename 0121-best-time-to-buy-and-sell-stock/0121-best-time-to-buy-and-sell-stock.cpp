class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minSoFar=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++){
            minSoFar=min(prices[i],minSoFar);
            maxProfit=max(maxProfit,prices[i]-minSoFar);
        }
        return maxProfit;
    }
};