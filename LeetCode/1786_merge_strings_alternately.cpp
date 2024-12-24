// Source : https://leetcode.com/problems/merge-strings-alternately/description/
// Author : Annur Hassan


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string new_string = "";
        while (i < word1.length() and j < word2.length()) {
            new_string += word1[i]; 
            new_string += word2[j];
            i += 1;
            j += 1; 
        }

        if (i != word1.length()) {
            new_string += word1.substr(i);
        }

        if (j != word2.length()) {
            new_string += word2.substr(j);
        }

        return new_string;
    }
};