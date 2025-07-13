LC:162
  
A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
You must write an algorithm that runs in O(log n) time.

Example 1:

Input: nums = [1,2,3,1]
Output: 2
  brute approach:
int findPeakElement(vector<int>& nums) {
       int maxi=0, index=0, n= nums.size();
       for(int i=1; i<n ; i++){
            if ((i == 0 || nums[i - 1] < nums[i]) && 
                (i == n - 1 || nums[i] > nums[i +1]))                 
                 {       
                        maxi = nums[i];
                        maxi=max(maxi, nums[i]);
                        index= i;
                }
       }
       return index; 
    }
};

------------------------------------------------------------------
  using Binary Search :O(logn)

 int s=0, e= nums.size()-1;

        while(s<e){
            int mid=(s+e)/2;
            if(nums[mid]> nums[mid+1]){
                e= mid;
            }
            else {
                s= mid+1;
            }
        }
        return s;
    }
