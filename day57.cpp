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
