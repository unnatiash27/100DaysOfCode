//Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

class Solution {
public:
     int findGCD(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX;
         for(int i=0;i<nums.size();i++){
           maxi=max(maxi,nums[i]);
           mini=min(mini,nums[i]);
         }
         return gcd(maxi,mini);
    }
};

