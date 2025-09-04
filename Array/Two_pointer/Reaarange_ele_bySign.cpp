2149. Rearrange Array Elements by Sign

You should return the array of nums such that the the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.



Example 1:

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
int pos=0, neg=1 ,n = nums.size();
        vector<int> res(n,0);
        for(int x: nums){
            if(x > 0){
                res[pos]= x;
                pos+=2;
            }
            else {
                res[neg]= x;
                neg+=2;
            }
        }
        return res;
    }
};
