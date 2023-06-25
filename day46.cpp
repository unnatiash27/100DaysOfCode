//You are given a string s that consists of lower case English letters and brackets.
//Reverse the strings in each pair of matching parentheses, starting from the innermost one.

class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(ans);
                ans="";
            }
            else if(s[i]==')')
            {
                reverse(ans.begin(),ans.end());
                string top=st.top();
                st.pop();
                top.append(ans);
                ans=top;
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
