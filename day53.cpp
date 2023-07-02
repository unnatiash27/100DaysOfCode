//Return the minimum number of elements to delete from nums to make it beautiful.

class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<nums.size()-1;i+=2)
        {
                if(nums[i]!=nums[i+1] )
                continue;
                c++;
                i--;
            
        }
        if ((nums.size() - c) % 2 == 0)
            return c;
        else
            return c + 1;
    }
};
