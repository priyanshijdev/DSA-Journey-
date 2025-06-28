Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Example 1:

Input: s = "anagram", t = "nagaram"  Output: true

Brute_force Approach: O(nlogn)

    bool isAnagram(string s, string t) {
        int n= s.length();
        int m=t.length();
        if(n!=m) {
               return false;
        }
      sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i=0; i<n; i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
-----------------------------------------------------------------------------------------------------------------------

Optimised Approach:

  


  
