//Given a string s and a character letter, return the percentage of characters in s that equal letter rounded down to the nearest whole percent.


class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0;double p=0.0;int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==letter)
            c++;
        }
        p=c*100;
        ans=floor(p/n);
        return ans;
    }
};



// The letter value of a letter is its position in the alphabet starting from 0 (i.e. 'a' -> 0, 'b' -> 1, 'c' -> 2, etc.).
// The numerical value of some string of lowercase English letters s is the concatenation of the letter values of each letter in s, which is then converted into an integer.

class Solution
{
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord)
    {
        int first = 0, second = 0, target = 0;

        for (int i = 0; i < firstWord.size(); i++)
            first = first * 10 + (firstWord[i] - 'a');

        for (int i = 0; i < secondWord.size(); i++)
            second = second * 10 + (secondWord[i] - 'a');

        for (int i = 0; i < targetWord.size(); i++)
            target = target * 10 + (targetWord[i] - 'a');

        return first + second == target;
    }
};
