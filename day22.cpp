// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

class Solution
{
public: 
    int subtractProductAndSum(int n)
    {
        int s = 0, p = 1;
        while (n != 0)
        {
            int d = n % 10;
            s = s + d;
            p = p * d;
            n = n / 10;
        }
        int ans = p - s;
        return ans;
    }
};
