//You are given a string s, which contains stars *.
//In one operation, you can:
//Choose a star in s.
//Remove the closest non-star character to its left, as well as remove the star itself.
//Return the string after all stars have been removed.


class Solution {
public:
    string removeStars(string s) {
     stack<int>st;
     string ans;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]=='*')
         {
             if(!s.empty())
             {
                 st.pop();
             }
         }
         else
         {
             st.push(s[i]);
         }
     }   
     while(!st.empty())
     {
         ans+=st.top();
         st.pop();
     }
     reverse(ans.begin(),ans.end());
     return ans;
    }
};
