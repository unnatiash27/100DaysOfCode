//You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {celsius + 273.15, celsius * 1.8 + 32};
    }
};
