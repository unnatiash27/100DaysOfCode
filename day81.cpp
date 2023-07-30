//You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto &i:tokens)  
        {
            if(i == "+" || i == "-"  || i == "*"  || i == "/")
            {
                long long  x = st.top() ; 
                st.pop() ;
                long long  y = st.top() ; 
                st.pop() ;

                if(i=="+")
                x=x+y;  
                if(i=="-")
                x=y-x;  
                if(i=="*")
                x=x*y;
                if(i=="/")
                x=y/x;
                st.push(x);
            }
            else
            st.push(stoi(i)); 
        }
        return st.top();
    }
};
