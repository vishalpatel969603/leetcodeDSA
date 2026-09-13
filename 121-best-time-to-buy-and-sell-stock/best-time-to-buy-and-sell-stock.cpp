class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int mx=0;
       int j=0;
      for(int i=1;i<n;i++){
          if(prices[j] > prices[i]) prices[j] = prices[i];
         else if(prices[i]-prices[j] > mx) mx = prices[i]-prices[j];
      }
          return mx; 
    }
};