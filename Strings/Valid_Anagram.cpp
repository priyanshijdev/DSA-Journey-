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

  
if (str1.length() != str2.length())
    return false;
 
  int freq[26] = {0};
  for (int i = 0; i < str1.length(); i++)
  {
    freq[str1[i] - 'A']++;
  }
  for (int i = 0; i < str2.length(); i++)
  {
    freq[str2[i] - 'A']--;
  }
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] != 0)
      return false;
  }
  return true;
