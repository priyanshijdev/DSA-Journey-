Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"

    string mergeAlternately(string word1, string word2) {
        string str="";
        int i=0, n= word1.length(), m=word2.length();
        while(i<n || i<m)
            if( i < n ) {
            str += word1[i];
            }
            if( i < m ){
             str += word2[i];
            }
            i++;
        }
        return str;
    }
};
