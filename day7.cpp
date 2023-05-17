// You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
// Letters are case sensitive, so "a" is considered a different type of stone from "A".

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int c = 0;
        for (int i = 0; i < jewels.size(); i++)
        {
            for (int j = 0; j < stones.size(); j++)
            {
                if (jewels[i] == stones[j])
                    c++;
            }
        }

        return c;
    }
};


//You are given a string s, where every two consecutive vertical bars '|' are grouped into a pair. In other words, the 1st and 2nd '|' make a pair, the 3rd and 4th '|' make a pair, and so forth.
//Return the number of '*' in s, excluding the '*' between each pair of '|'.
//Note that each '|' will belong to exactly one pair.

class Solution {
public:
    int countAsterisks(string s) {
        int c=0,x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|')
            x++;
            if(x%2==0)
            {
                if(s[i]=='*')
                c++;
            }
        }
        return c;
    }
};

