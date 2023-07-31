//Given an integer array nums, find a 
//subarray  
// that has the largest product, and return the product.

/*class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++)             
        {
            int p=1;
            for(int j=i;j<nums.size();j++)
            {
                p=p*nums[j];  
                if(p>max)
                {  
                    max=p;    
                }
            }
        }
        return max;
    }
};*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int maxSoFar = ans, minSoFar = ans;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
                swap(maxSoFar,minSoFar);

            maxSoFar = max(maxSoFar*nums[i],nums[i]);
            minSoFar = min(minSoFar*nums[i],nums[i]);

            ans = max(maxSoFar,ans);
        }
        return ans;
    }
};
