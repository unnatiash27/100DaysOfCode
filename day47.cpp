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
