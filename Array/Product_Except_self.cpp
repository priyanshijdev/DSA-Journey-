Lc:238
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.




Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

  BRUTE FORCE APPROACH:
 
  vector<int> res(n, 1);

    for (int i = 0; i < n; i++) {
              for (int j = 0; j < n; j++) {
            if (i != j) 
                res[i] *= arr[j];
        }
    }

    return res;
}

 
 ------------------------------------------------------------------------------------
Code:

    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);

        int left = 1;
        for (int i = 0; i < nums.size(); i++) {
            output[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= right;
            right *= nums[i];
        }

        return output;        
    }
