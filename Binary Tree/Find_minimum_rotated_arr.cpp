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
  
Binary Search:

class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            // keep the minimum:
            ans = min(ans, arr[low]);

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            ans = min(ans, arr[mid]);

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return ans;
}

};
