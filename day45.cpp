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


//Return the stack operations needed to build target following the mentioned rules. If there are multiple valid answers, return any of them.


class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string> ans;
        int j=0;
        for(int i=1; i<=n; i++)
        {
            if(j==target.size())
            {
                break;
            }
            if(target[j]==i)
            {
                ans.push_back("Push");
                j++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};
