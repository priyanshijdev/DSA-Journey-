https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.

  
 int output= INT_MAX;
        for(int i=0; i<nums.size(); i++){
            output = min(output, nums[i]);
        }
        return output;

----------------------------------------------
  
