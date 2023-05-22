// Given a 0-indexed string word and a character ch, reverse the segment of word that starts at index 0 and ends at the index of the first occurrence of ch (inclusive). If the character ch does not exist in word, do nothing.


class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        for(int j=0;j< word.size();j++)
        {
            if(word[j]==ch)
            {
                reverse(word.begin(),word.begin()+j+1);
                break;
            }
            
        }
        return word;
    }
};
