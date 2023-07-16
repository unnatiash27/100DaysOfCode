//Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());

        return max(0,mx-k-mn-k);        
    }
};
