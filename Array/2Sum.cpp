
// 2 7 11 15 >> tar= 9 
        // O/p: 0,1 
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum, n = nums.size();
        // vector<int> vec
        for(int i=0;i<n;i++){
            for(int j=i+1; j<n;j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
        }
        ----------------------------------------------------------
        Optimised : Use Hashing 

    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int,int>maps;
        // second optimised -> sort and then check
        for(int i=0; i<n; i++){
            int num = nums[i];
            int needed= target-num;
            if(maps.find(needed)!= maps.end()){
                return  {maps[needed], i};
            }
             maps[num] = i;
        }
        return {-1,-1};
---------------------------------------------------------------
Dry run:

Iteration 1:
i = 0

num = arr[0] = 2

moreNeeded = 9 - 2 = 7

Check if 7 is in the map → ❌ No
→ Add 2 to the map → mpp = { 2: 0 }
