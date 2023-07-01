//Given a string s, return the lexicographically smallest subsequence  of s that contains all the distinct characters of s exactly once.

class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char>st;
        vector<int>hash(26,0);
        vector<bool>visited(26,false);
        for(auto u : s) hash[u-'a']++;
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-'a']--;
            if(st.empty()) st.push(s[i]),visited[s[i]-'a']=true;
            else
            {
                if(!visited[s[i]-'a'])
                {
                    while(!st.empty() && s[i]<st.top() && hash[st.top()-'a']!=0)
                    {
                        visited[st.top()-'a']=false;
                        st.pop();
                    }
                    st.push(s[i]);
                    visited[s[i]-'a']=true;
                }
            }
        }
        string ans = "";
        while(!st.empty()) ans.push_back(st.top()), st.pop();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
