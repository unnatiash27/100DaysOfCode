//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1; j<nums.size();j++)
          {
            if(nums[i] + nums[j] == target)
            {
            ans.push_back(i);
            ans.push_back(j);
            }
          }
        }
        return ans;        
    }
};
