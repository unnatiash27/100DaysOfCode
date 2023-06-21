//Given a VPS represented as string s, return the nesting depth of s.


class Solution {
public:
    int maxDepth(string s) {
     stack<char>st;
     int m=0;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]=='(')
         st.push('(');
         else if(s[i]==')')
         {
             int x=st.size();
             m=max(m,x);
             st.pop();
         }
     }   
     return m;
    }
};
