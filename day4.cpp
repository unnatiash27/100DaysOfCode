// Given an array of positive integers arr, return the sum of all possible odd-length subarrays of arr.A subarray is a contiguous subsequence of the array.
class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int s = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i; j < arr.size(); j++)
            {
                for (int k = i; k <= j; k++)
                {
                    if ((i + j) % 2 == 0)
                    {
                        s += arr[k];
                    }
                }
            }
        }
        return s;
    }
};

//You are given an array rectangles where rectangles[i] = [li, wi] represents the ith rectangle of length li and width wi.
//You can cut the ith rectangle to form a square with a side length of k if both k <= li and k <= wi. For example, if you have a rectangle [4,6], you can cut it to get a square with a side length of at most 4.
//Let maxLen be the side length of the largest square you can obtain from any of the given rectangles.
//Return the number of rectangles that can make a square with a side length of maxLen.

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>ans;
        int c;
        for(int i=0;i<rectangles.size();i++)
        {
            int n=rectangles[i][0];
            int m=rectangles[i][1];
            ans.push_back(min(n,m));
        }
        int max= *max_element(ans.begin(),ans.end());
        c=count(ans.begin(),ans.end(),max);
        return c;
    }
};

//You are given an array of strings words and a string pref.
//Return the number of strings in words that contain pref as a prefix.
//A prefix of a string s is any leading contiguous substring of s.

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c,ans=0;

        for(int i=0;i<words.size();i++)
        {
            c=0;
            for(int j=0;j<pref.size();j++)
            {
                if(words[i][j]!=pref[j])
                break;
                else
                    c++;
                if(c==pref.size())
                ans++;
            }
        }
        return ans;
    }
};

// Given an integer n, return any array containing n unique integers such that they add up to 0.

class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> arr;

        if (n % 2 == 0)
        {
            for (int i = 1; i < (n / 2) + 1; i++)
            {
                arr.push_back(i);
                arr.push_back(-i);
            }
        }

        else
        {
            int s = 0;
            for (int i = 1; i < n; i++)
            {
                arr.push_back(i);
                s = s + i;
            }
            arr.push_back(-s);
        }

        return arr;
    }
};


