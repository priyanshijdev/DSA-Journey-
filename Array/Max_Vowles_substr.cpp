1456. Maximum Number of Vowels in a Substring of Given Length

Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.

  code:
    private:
    bool isVowel(char c){
        if(c== 'a' || c=='e' || c=='i'  || c=='o' || c=='u'  ){
            return true;
        }
        return false;
    }
public:
    int maxVowels(string s, int k) {
        int count=0, vowel =0, n= s.length();
        for(int i=0; i<n;i++){
            if(isVowel(s[i])) count++;
            if(i>=k && isVowel(s[i-k])) count--;
            vowel= max(vowel, count);
        }
        return vowel;
    }
};
