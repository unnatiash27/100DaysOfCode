//Given an integer n (in base 10) and a base k, return the sum of the digits of n after converting n from base 10 to base k.

class Solution {
public:
    int sumBase(int n, int k) {
        int s=0;
        while(n>0)
        {
            s+=n%k;
            n=n/k;
        }
        return s;
    }
};
