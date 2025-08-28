Input: prices = [7,1,5,3,6,4]
Output: 5

  int n = prices.size();
        int profit =0 , minPrice =INT_MAX;

        for(int i=0; i<n; i++){
            minPrice = min(minPrice, prices[i]);
            profit= max( profit,prices[i]-minPrice);
        }
        return profit;
    }
