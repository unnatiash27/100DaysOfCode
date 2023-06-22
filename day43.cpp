//You are given a string s consisting only of uppercase English letters.
//You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings "AB" or "CD" from s.
//Return the minimum possible length of the resulting string that you can obtain.

class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        int ans=0;
        string ss;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(!st.empty() && st.top() == 'A' && s[i] == 'B')
            {
                st.pop();
            }
            else if (!st.empty() && st.top() == 'C' && s[i] == 'D') 
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        return st.size();
    }
};


//Return the minimum number of operations needed to go back to the main folder after the change folder operations.

class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]=="../")
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            
                else if(logs[i]!="./")
                st.push("+");
        }
        return st.size();
    }
};
