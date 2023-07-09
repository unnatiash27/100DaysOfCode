//Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.

class Solution 
{
public:
    int pivotInteger(int n) 
    {
        
        int totsum=0;
        for(int i=1; i<=n; i++) //calculate total sum
            totsum += i;
        
        int presum=0;
        
        for(int i=1; i<=n; i++)
        {
            presum += i; //calculate prefix sum
            if((totsum - presum + i) == presum) //apply condition mentioned in the problem
                return i;
        }
        return -1;
    }
};
