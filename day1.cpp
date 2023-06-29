//You are given an array of n strings strs, all of the same length.
//The strings can be arranged such that there is one on each line, making a grid.

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        for(int i=0;i<strs[0].size();i++){
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]>strs[j+1][i]){
                    count++;
                    break; 
                }
            }
        }
        return count;
    }
};
