//You are given a 0-indexed string pattern of length n consisting of the characters 'I' meaning increasing and 'D' meaning decreasing.

class Solution {
public:
    string smallestNumber(string pat) {
        string ans="";
        int n = pat.size();
        stack<char> st;
        int i=0;
        char ch = '1';
        st.push(ch);
        while(!st.empty() && i<n){
            ch++;
            if(pat[i]=='I'){
                while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }
                st.push(ch);
            }
            else{
                st.push(ch);
            }
            i++;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
