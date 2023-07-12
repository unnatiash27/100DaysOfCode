//Given an integer num, reverse num to get reversed1, then reverse reversed1 to get reversed2. Return true if reversed2 equals num. Otherwise return false.


class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0)return true;
        if(num%10 == 0)return false;
        return true;
    }
};
