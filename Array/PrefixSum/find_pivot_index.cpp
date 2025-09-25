https://leetcode.com/problems/find-pivot-index/solutions/

Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
  
code:


    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        int leftSum=0;
        int rightSum= accumulate(nums.begin(), nums.end(), 0);


        for(int i=0; i<n; i++){
            rightSum-= nums[i];
            if(leftSum== rightSum){
                return i;
            }
            leftSum+= nums[i];
        }
        return -1;
    }
