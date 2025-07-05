For two strings s and t, we say "t divides s"
Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"


Code:


  string gcdOfStrings(string str1, string str2) {
        return (str1+str2 == str2+str1 ) ?
        str1.substr(0, gcd(size(str1),size(str2)))
        : "";

}
