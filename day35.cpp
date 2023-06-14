//You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {celsius + 273.15, celsius * 1.8 + 32};
    }
};


//You are given a positive integer num consisting of exactly four digits. Split num into two new integers new1 and new2 by using the digits found in num. Leading zeros are allowed in new1 and new2, and all the digits found in num must be used.

class Solution {
public:
    int minimumSum(int num) {
        int index=0;
        vector<int>dig(4);
        while(num>0)
        {
            dig[index++]=num%10;
            num=num/10;
        }
        sort(dig.begin(),dig.end());
        return dig[0]*10+dig[2] +  dig[1]*10+dig[3];
    }
};
