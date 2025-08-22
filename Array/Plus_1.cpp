Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.

    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); 
        for(int i=n-1; i >=0; i--){
           
            if(digits[i] +1 != 10){
                digits[i] +=1;
                return digits;
            }
            digits[i] =0;
            if(i == 0){
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        return digits;
    }
