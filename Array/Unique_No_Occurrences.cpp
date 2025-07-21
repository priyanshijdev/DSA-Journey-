 Unique Number of Occurrences::

Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise
 
Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

 Brute Force:
 sort(arr.begin(), arr.end());
        vector<int> v;
        int n= arr.size();

        for(int i=0; i<n; i++){
            int count =1;
            while(i+1 < n && arr[i] == arr[i+1]){
                count++;
                i++;
            }
            v.push_back(count);
        }
        sort(v.begin(), v.end());

        for(int i= 1; i<v.size(); i++){
            if(v[i] == v[i-1]){
                return false;
            }
        }
        return true;
---------------------------------------------------------------------------------------------------------------

 
