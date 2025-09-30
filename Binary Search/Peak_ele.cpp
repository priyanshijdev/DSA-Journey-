lc: 162
  Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.



Brute force:

    int findPeakElement(vector<int>& nums) {
        // int ans=INT_MAX; 
        int n= nums.size();
        for(int i=0; i<n; i++){
            if( (i==0 || nums[i-1] < nums[i]) &&
                (i==n-1 || nums[i] > nums[i+1]) ){
                    return i;
                }
            
        }
        return -1;
    }

optimised:

