//You are given an integer n and an integer start.
//Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.
//Return the bitwise XOR of all elements of nums.  

class Solution {    
public:  
    int xorOperation(int n, int start) {
        int nums[n];
        for(int i=0;i<n;i++)
        {
            nums[i] = start + 2 * i;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};



//Return the time when the train will arrive at the station

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int sum;
        sum=arrivalTime+delayedTime;  
        return sum%24;
    }
};
