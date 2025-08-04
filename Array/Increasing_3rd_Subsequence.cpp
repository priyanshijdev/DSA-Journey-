Increasing Triplet Subsequence:

Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. 
If no such indices exists, return false.

Example 1:

Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.

  O(n3)
    bool increasingTriplet(vector<int>& nums) {
        int n= nums.size();
        for (int i = 0; i < n; i++)
  for (int j = i + 1; j < n; j++)
    for (int k = j + 1; k < n; k++)
      if (nums[i] < nums[j] && nums[j] < nums[k])
       { return true;}

return false;
}



