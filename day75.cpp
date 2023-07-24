class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long maxi=-1,mini=-1,ans=0,l=-1;
        for(int i=0;i<nums.size();++i)
        {
           if(nums[i]<minK || nums[i]>maxK)
           {   
               mini=-1;
               maxi=-1;
               l=i;   
           }     
           else     
           {
               if(nums[i]==minK)mini=i;
               if(nums[i]==maxK)maxi=i;
               if(maxi!=-1&&mini!=-1)  
               ans+=min(mini,maxi)-l;
           }   
        }
        return ans;
    }  
};//Return the number of fixed-bound subarrays.
