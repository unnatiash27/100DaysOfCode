 //Return an array (of length num_people and sum candies) that represents the final distribution of candies.


class Solution {
public:
    vector<int> distributeCandies(int candies, int npeople) {
        vector<int>ans(npeople,0);
        int i=0,n=1;
        while(candies>0){
            i = i%npeople;
            ans[i]= ans[i]+min(candies,n);
            candies-=n;
            n++;
            i++;
        }
        return ans;
    }
};


