Best time to Buy and Sell Stocks
    int maxProfit(vector<int>& nums) {
        int n= nums.size();
        int maxSum=0;
        for(int i=0;i<n; i++){
            for(int j=i;j<n;j++){
                maxSum = max(maxSum, nums[j]- nums[i]);
            }
        }
        return maxSum;
    }
};
TLE:

---------------------------------------------------------------------------------------------------------------------------------
  Optimised :

    int maxProfit(vector<int>& arr) {
         int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;
    }
