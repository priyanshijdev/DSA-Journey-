523. Continuous Subarray Sum

Given an integer array nums and an integer k, return true if nums has a good subarray or false otherwise.

A good subarray is a subarray where:

its length is at least two, and
the sum of the elements of the subarray is a multiple of k.
Note that:

Example 1:

Input: nums = [23,2,4,6,7], k = 6
Output: true
Explanation: [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.


   int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // ensure length ≥ 2
            int sum = 0;
            for (int t = i; t <= j; t++) {
                sum += nums[t];
            }
            if (k != 0) {
                if (sum % k == 0) return true;
            } else {
                if (sum == 0) return true;
            }
        }
    }
    return false;
