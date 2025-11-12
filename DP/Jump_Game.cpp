Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

  TC: O(n)
    bool canJump(vector<int>& nums) {
        // maintain maxIndex 
        int maxIndex=0;
        int n= nums.size();

        for(int i=0; i<n; i++){
            if(i> maxIndex) return false ;
            maxIndex = max(maxIndex, i+ nums[i]);

        }
        return true;
    }
