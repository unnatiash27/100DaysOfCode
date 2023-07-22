//Given an array of integers nums and an integer limit, return the size of the longest non-empty subarray such that the absolute difference between any two elements of this subarray is less than or equal to limit.

 
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
     deque<int>maxi,mini;
     int ans;
     int j=0;
     for(int i=0;i<nums.size();i++)
     {
         while(!maxi.empty() &&nums[i]>maxi.back())maxi.pop_back();
         while(!mini.empty() && nums[i]<mini.back())mini.pop_back();
         maxi.push_back(nums[i]);
         mini.push_back(nums[i]);
         while(maxi.front()-mini.front() > limit)
         {
             if(nums[j]==maxi.front())maxi.pop_front();
             if(nums[j]==mini.front())mini.pop_front();
             j++;
         }
         ans=max(ans,i-j+1);
     }   
     return ans;
    }
};
