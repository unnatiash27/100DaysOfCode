//In one operation you can choose any subarray from initial and increment each value by one.
//Return the minimum number of operations to form a target array from initial.

class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int ans=target[0],n=target.size();
        for(int i=1;i<n;i++)
        {
            if(target[i]>target[i-1])
            ans+=(target[i]-target[i-1]);
        }
        return ans;
    }
};


//Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty()||s[i]!=st.top().first)
            {
                st.push({s[i],1});
            }
            else
            {
                auto top_=st.top();
                st.pop();
                st.push({s[i],top_.second+1});
            }
            if(st.top().second==k)
            st.pop();
        }
        while(!st.empty())
        {
            while(st.top().second--)
            {
                ans+=st.top().first;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


//Return the sum of all subarray ranges of nums.

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int mini=INT_MAX;
            int maxi=INT_MIN;
            for(int j=i;j<nums.size();j++)
            {
                mini=min(mini,nums[j]);
                maxi=max(maxi,nums[j]);
                ans+=maxi-mini;
            }
        }
        return ans;
    }
};
