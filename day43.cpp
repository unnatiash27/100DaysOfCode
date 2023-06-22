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

//Return the string after making it good. The answer is guaranteed to be unique under the given constraints.


class Solution {
public:
    string makeGood(string s) {
        stack <char> stk; //create stack of characters
        stk.push(s[0]); //push the first element
        for(int i=1;i<s.length();++i) //start comparing from 2nd character if the string
        {
            if(stk.empty()|| (stk.top()-s[i] != 32 && s[i]-stk.top() != 32))
             stk.push(s[i]); // push the character if the stack is empty or in the pair of consecutive characters one is uppercase of the other
            else stk.pop(); // difference of ASCII value of lowercase from its uppercase is 32
        }
        string ans="";
        while(!stk.empty())  // pop the remaining stack
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end()); // reverse the string as stack pops in reverse order
        return ans;
    }
};
