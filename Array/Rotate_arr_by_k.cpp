
Brute force -
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

        if(n==0 || k<=0) return ;
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            temp[i]= nums[i];
        }
        // rotate 
        for (int i = 0; i < n; i++){
            nums[(i+k) %n]= temp[i];
        }
    }
Dry run:

i	numsCopy[i]	(i + k) % n	nums[newIndex]
0	1	(0 + 3) % 7 = 3	nums[3] = 1
1	2	(1 + 3) % 7 = 4	nums[4] = 2
2	3	(2 + 3) % 7 = 5	nums[5] = 3
3	4	(3 + 3) % 7 = 6	nums[6] = 4
4	5	(4 + 3) % 7 = 0	nums[0] = 5
5	6	(5 + 3) % 7 = 1	nums[1] = 6
6	7	(6 + 3) % 7 = 2	nums[2] = 7

------------------------------------------------------------------------------
Optimised :O(n), O(1)

    void rotate(vector<int>& nums, int k) {
        // 1 2 3 4 5 6 >> 
        k= k% nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
