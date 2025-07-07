LC: 345
Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Example 1:

Input: s = "IceCreAm"
Output: "AceCreIm"

    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    string reverseVowels(string s) {
     //     using slow fast ptr approach :

     int slow=0, fast= s.length()-1;
     while(slow<=fast){
        if(!isVowel(s[slow])){
            slow++;
        }
        else if(!isVowel(s[fast])){
            fast--;
        }
        else {
            swap(s[slow], s[fast]);
            slow++;
            fast--;
        }
     }
return s;
    }
