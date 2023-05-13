//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
//Return the running sum of nums.

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     int sum=0;
     vector<int> ans;
     for(int i=0;i<nums.size();i++)
     {
         sum=sum+nums[i];
         ans.push_back(sum);
     }   
     return ans;
    }
};

// You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.
// A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {

        vector<int> ans;

        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                sum = sum + accounts[i][j];
            }
            ans.push_back(sum);
            sort(ans.begin(), ans.end());
        }
        return (ans[ans.size() - 1]);
    }
};

// Given an array of integers nums, return the number of good pairs.A pair (i, j) is called good if nums[i] == nums[j] and i < j.
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    ans++;
            }
        }
        return ans;
    }
};
