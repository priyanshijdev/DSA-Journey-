LC: 453
  Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

In one move, you can increment n - 1 elements of the array by 1.

Example 1:

Input: nums = [1,2,3]
Output: 3
Explanation: Only three moves are needed (remember each move increments two elements):
[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]

  
    int minMoves(vector<int>& nums) {
        int ans=0, mini = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            mini = min(mini , nums[i]);
        }

        for(int x: nums ){
            ans= ans + (x-mini);

        }
        return ans;
    }
};
