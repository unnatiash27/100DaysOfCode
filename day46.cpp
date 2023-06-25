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


//Given a string s of '(' , ')' and lowercase English characters.
//Your task is to remove the minimum number of parentheses ( '(' or ')', in any positions ) so that the resulting parentheses string is valid and return any valid string.

class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        stack<int> st;
        string res = "";

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(')
                st.push(i);
            else if (s[i] == ')')
            {
                if (st.empty())
                    s[i] = '#';
                else
                    st.pop();
            }
        }

        while (!st.empty())
        {
            s[st.top()] = '#';
            st.pop();
        }

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != '#')
                res.push_back(s[i]);
        }

        return res;
    }
};
