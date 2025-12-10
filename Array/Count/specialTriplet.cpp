
TC:O(n2) >>>>>>>>>>> TLE 
  
    int specialTriplets(vector<int>& nums) {

        long long result = 0; const int MOD = 1e9 + 7;
        
        for (int j = 1; j < n - 1; j++) {
            int target = nums[j] * 2;
            
            long long leftCount = 0;
            for (int i = 0; i < j; i++) {
                if (nums[i] == target) {
                    leftCount++;
                }
            }
            
            // Count elements on right that equal nums[j] * 2
            long long rightCount = 0;
            for (int k = j + 1; k < n; k++) {
                if (nums[k] == target) {
                    rightCount++;
                }
            }
            
            result = (result + (leftCount * rightCount) % MOD) % MOD;
        }
        return result;
    }
