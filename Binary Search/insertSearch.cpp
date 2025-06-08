lc- 35
 Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.


    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int s=0, e=n-1, ans=n;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]>= target){
                ans= mid;
                e= mid-1;
            }
            else {
                s=mid+1;
            }
        } 
        return ans;
    }
};
