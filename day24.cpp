// Given a string s, return true if s is a good string, or false otherwise.
// A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).


class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector <int>hash(26,0);
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-97]++;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if(hash[s[i]-97]!=hash[s[i+1]-97])
            return false;
        }
        return true;
    }
};



// You are given a string array words and a string s, where words[i] and s comprise only of lowercase English letters.
// Return the number of strings in words that are a prefix of s.


class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int c=0;
       for(int i=0;i<words.size();i++)
       {
           if(s.find(words[i])==0)
           c++;
       } 
       return c;
    }
};
