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
