//2215. Find the Difference of Two Arrays 
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
{
        unordered_set<int> s1, s2;   
        vector<vector<int>> answer(2);     
        for (auto num : nums1)
            s1.insert(num);
        for (auto num : nums2)   
            s2.insert(num);   
        for (auto num : s1) { 
            if (s2.find(num) == s2.end()) 
            {
                answer[0].push_back(num);
            }
        }  
        for (auto num : s2) {  
            if (s1.find(num) == s1.end()) {
                answer[1].push_back(num);     
            }  
        }
        return answer;
    }

};


//2778. Sum of Squares of Special Elements

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        for(int i=1;i<=nums.size();i++)
        {
            if(nums.size() % i == 0)
            {
                int sq=nums[i-1]*nums[i-1];
                sum+=sq;
            }
        }
        return sum;
    }
};
