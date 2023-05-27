// You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff.

class Solution
{
public:
    int arithmeticTriplets(vector<int> &nums, int diff)
    {

        int n = nums.size();

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (nums[k] - nums[j] == diff && nums[j] - nums[i] == diff)
                    {
                        cnt++;
                    }
                }
            }
        }

        return cnt;
    }
};
