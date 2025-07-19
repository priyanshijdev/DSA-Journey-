LC: 2215
Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
answer[1] is a list of all distinct integers in nums2 which are not present in nums1. 

Example 1:

Input: nums1 = [1,2,3], nums2 = [2,4,6]
Output: [[1,3],[4,6]]

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> vec1, vec2;
        for(int x: set1){
            if(set2.count(x) == 0 ){
            vec1.push_back(x);
            }
        }
        for(int x: set2){
            if(set1.count(x) == 0 ){
            vec2.push_back(x);
            }
        }
        return {vec1, vec2};
    }
