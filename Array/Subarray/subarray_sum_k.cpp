560. Subarray Sum Equals K

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 
Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:


 for (int i = 0 ; i < n; i++) { // starting index i
        for (int j = i; j < n; j++) { // ending index j

            // calculate the sum of subarray [i...j]
            int sum = 0;
            for (int K = i; K <= j; K++)
                sum += arr[K];

            // Increase the count if sum == k:
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}

better approach:

  int n= nums.size(), ans=0;
        for(int i=0; i<n ; i++){
            int sum=0; 
            for(int j=i; j<n; j++){
                sum+= nums[j];
                if(sum== k){
                    ans++;
                }
            }
        }
        return ans;
    }

