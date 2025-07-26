392. Is Subsequence
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) 
of the characters without disturbing the relative positions of the remaining characters. 
 
Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true

Code:

    bool isSubsequence(string s, string t) {
       int a=0,b=0;

       while(a<s.length() && b<t.length()){
            if(s[a] ==t[b] ){
                a++;
            }
            b++;
       }
       return a==s.length();
    }
