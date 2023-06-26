//Given a balanced parentheses string s, return the score of the string.

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        string ss;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(c);
                c=0;
            }
            else if(!st.empty() && s[i]==')')
            {
                
                c=st.top()+max(c*2,1);
                st.pop();
            }
        }
        return c;
    }
};


//Given a string s, determine if it is valid.
//A string s is valid if, starting with an empty string t = "", you can transform t into s after performing the following operation any number of times:
//Insert string "abc" into any position in t. More formally, t becomes tleft + "abc" + tright, where t == tleft + tright. Note that tleft and tright may be empty.
//Return true if s is a valid string, otherwise, return false.

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == 'c') {
                if (st.size() < 2 || st.top() != 'b') return false;
                st.pop();
                if (st.top() != 'a') return false;
                st.pop();
            } else st.push(c);
        }
        return st.empty();
    }
};
