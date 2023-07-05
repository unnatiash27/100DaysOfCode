//Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].

class Solution {
public:
    bool checkSelf(int N) {
        int rem, temp = N;
        while (N != 0) {
            rem = N % 10;
            if (rem == 0) return false;
            if (temp % rem != 0) return false; 
            N = N / 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> A;
        for (int i = l; i <= r; i++) {
            if (checkSelf(i)) {
                A.push_back(i);
            }
        }
        return A;
    }
};


//A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
//Given an integer n, return true if n is a perfect number, otherwise return false.


class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
            sum+=i;
        }
        if(sum==num)
        return true;

        return false;
    }
};
