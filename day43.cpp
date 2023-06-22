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


//Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,s2;
        stack<int>st1,st2;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && !st1.empty())
            st1.pop();
            else if(s[i] != '#')
            st1.push(s[i]);
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' && !st2.empty())
            st2.pop();
            else if(t[i] != '#')
            st2.push(t[i]);
        }
        while(!st1.empty()){
                 
                 s1.push_back(st1.top());
                 st1.pop();
                 
         }
         while(!st2.empty()){
                 
                 s2.push_back(st2.top());
                 st2.pop();
                 
         }
         return s1 == s2;   
    }
};


//Design a stack that supports increment operations on its elements.

class CustomStack {
public:

vector<int> v;
int n;
    CustomStack(int maxSize) {
        n=maxSize;
    }
    
    void push(int x) {
        if(v.size()<n)
        {
            v.push_back(x);
        }
    }
    
    int pop() {
        if(v.size()>0)
        {
            int poo=v[v.size()-1];
            v.erase(v.begin()+v.size()-1);
            return poo;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        if(k>v.size())
        {
            for(int i=0 ; i<v.size() ; i++)
            {
                v[i] += val;
            }
        }
        else
        {
            for(int i=0 ; i<k ; i++)
            {
                v[i] += val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */


//Return the minimum number of moves required to make s valid.

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')')
            {
                if(st.empty())
                {
                    c++;
                }
                else if(st.top()=='(')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else if(s[i]=='(')
            {
                st.push(s[i]);
            }
        }
        return st.size()+c;
    }
};
