 //You are given a 0-indexed string s that has lowercase English letters in its even indices and digits in its odd indices.
//There is a function shift(c, x), where c is a character and x is a digit, that returns the xth character after c.
   
   
class Solution {
public:
    string replaceDigits(string s) 
    {
        string ans;
     for(int i=0;i<s.length();i++)
     {
         if(i%2 != 0)
         ans+=s[i-1]+(s[i]-'0');
         else
         ans+=s[i];
     }   
     return ans;
    }
};
  

//You are given coordinates, a string that represents the coordinates of a square of the chessboard. Below is a chessboard for your reference.


class Solution {
public:
    bool squareIsWhite(string coordinates) {
            if((coordinates[0]=='a'||coordinates[0]=='c'||coordinates[0]=='e'||coordinates[0]=='g') && coordinates[1]%2!=0)
            return false;
            else if((coordinates[0]=='b'||coordinates[0]=='d'||coordinates[0]=='f'||coordinates[0]=='h') && coordinates[1]%2==0)
            return false;
            else 
            return true;
      
    }
};

   

//Given a string s, find the length of the longest substring  without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        return 0;   
        unordered_map<char,int> m;  
        int i=0,j=0,ans=INT_MIN; 
        while(j<s.length())   
        {
            m[s[j]]++; 
            if(m.size()==j-i+1) 
            {
                ans = max(ans,j-i+1); 
            }
            else if(m.size()<j-i+1)  
            {
                {
                    m[s[i]]--;   
                    if(m[s[i]]==0) 
                    {
                        m.erase(s[i]);
                    }
                    i++; 
                }  
            }
             j++; 
        }
        return ans;
    }
};
