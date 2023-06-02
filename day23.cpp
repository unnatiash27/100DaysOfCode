//Given a positive integer num represented as a string, return the integer num without trailing zeros as a string.

class Solution {
public:
    string removeTrailingZeros(string num) {
        while(num.back()=='0')
        {
            num.pop_back();
        }
        return num;
    }
};


// There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.


class Solution {
public:
    bool judgeCircle(string moves) {
     int x=0,y=0;
     for(int i=0;i<moves.size();i++)
     {
         if(moves[i]=='U')
         x++;
         if(moves[i]=='D')
         x--;
         if(moves[i]=='L')
         y++;
         if(moves[i]=='R')
         y--;
     }   
     return(x==0 && y==0);
    }
};


//Given a string s consisting of lowercase English letters, return the first letter to appear twice.

class Solution {
public:
    char repeatedCharacter(string s) {
     int hash[256]={0};  
     for(int i=0;i<s.size();i++)
     {
         hash[s[i]]++;
         if(hash[s[i]]==2)
         return s[i];
     } 
     return -1;
    }
};



//You are given a 0-indexed string num of length n consisting of digits.
//Return true if for every index i in the range 0 <= i < n, the digit i occurs num[i] times in num, otherwise return false.

class Solution {
public:
    bool digitCount(string num) {
        int n=num.size();
        vector<int>hash(10,0);
        for(int i=0;i<n;i++)
        {
            hash[num[i]-'0']++;
        }
        for(int i=0;i<n;i++)
        {
            if(num[i]-'0' != hash[i])
            return false;
        }
        return true;
    }
};









