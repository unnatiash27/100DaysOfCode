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


//You are given an integer array prices where prices[i] is the price of the ith item in a shop.


class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;
        for(int i=0;i<prices.size();i++)
        {
            v.push_back(prices[i]);
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=prices[i])
                {
                    v[i]=prices[i]-prices[j];
                    break;
                }
            }
        }
        return v;
    }
};


//You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        int x;
        stack<int>st;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i] == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                
                st.push(y);
                st.push(x);
                st.push(x+y);
            }
            else if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                st.push(2*st.top());
            }
            else{
                int x = stoi(operations[i]);
                st.push(x);
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();       
        }
        return ans;
    }
};
