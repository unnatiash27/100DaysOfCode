//You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. 
//Return the number of unique arithmetic triplets. 

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff)
    {
       
      int n=nums.size();

      int cnt=0; 


      for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              for(int k=j+1;k<n;k++)
              {
                  if(nums[k]-nums[j]==diff&&nums[j]-nums[i]==diff)
                  {
                      cnt++;
                  }
              }
          }
      }

         return cnt;

    }
};


//we want to find the largest value in every contiguous 3 x 3 matrix in grid.
//Return the generated matrix.


class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<vector<int>> vec(n - 2, vector<int>(n - 2, 0));
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = 0; j < n - 2; j++)
            {
                int arr[] = {grid[i + 1][j + 1], grid[i + 1 - 1][j + 1], grid[i + 1 + 1][j + 1], grid[i + 1][j + 1 - 1], grid[i + 1][j + 1 + 1], grid[i + 1 - 1][j + 1 - 1], grid[i + 1 + 1][j + 1 + 1], grid[i + 1 - 1][j + 1 + 1], grid[i + 1 + 1][j + 1 - 1]};
                vec[i][j] = *max_element(arr, arr + 9);
            }
        }
        return vec;
    }
};


//You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.
//Return the number of consistent strings in the array words.

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int i, j, c=0;
        for(i=0 ; i<words.size() ; i++)
        {
            for(j=0 ; j<words[i].size() ; j++)
            {
                if(count(allowed.begin(), allowed.end(), words[i][j])==0)
                {
                    break;
                }
            }
            if(j==words[i].size())
            {
                c++;
            }
        }
        return c;
    }
};


