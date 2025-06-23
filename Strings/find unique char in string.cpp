Input: s = "leetcode"
Output: 0


    int firstUniqChar(string s) {
        int n= s.length();
             unordered_map<char, int> freq;

        for(int i=0; i<n;i++){
            freq[s[i]]++;
        }

       for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1)
                return i;
        }

        return -1;
    ---------------------------------------------------------------------------------
          int firstUniqChar(string s) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] == 1)
                return i;
        }

        return -1;
    }
};
