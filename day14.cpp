//Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

class Solution {
public:
    string sortSentence(string s) 
    {
        vector<string>v(10);
        string word;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]>=48 && s[i]<=57)
            {
                v[s[i]-48]=word+" ";
                word="";
                i++;
            }
            else
            word+=s[i];
          }
       string ans;
       for (auto x:v)
       ans+=x;
       ans.pop_back();
       return ans;
    }
};

//A string a is lexicographically smaller than a string b (of the same length) if in the first position where a and b differ, string a has a letter that appears earlier in the alphabet than the corresponding letter in b.
//Return the resulting palindrome string.

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size();
        int j=0;
        for(int i=n-1;i>j;i--)
        {
            if(s[i]!=s[j])
            {
                s[j]=s[i]=min(s[i],s[j]);
                
            }
            j++;
        }
        return s;
    }
};

// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        reverse(s.begin(), s.end());
    }
};
