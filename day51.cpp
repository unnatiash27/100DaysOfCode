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
