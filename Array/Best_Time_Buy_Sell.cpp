Input: prices = [7,1,5,3,6,4]
Output: 5

  int n = prices.size();
        int profir = INT_MAX, minProfit =0;

        for(int i=0; i<n; i++){
            minPrice = min(minPrice, prices[i]);
            profit= max( profit,prices[i]-minPrices);
        }
        return profit;
    }
