
//Return an array of strings containing the new strings formed after the splits, excluding empty strings.
class Solution {   
public:   
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;   
        for(int i=0; i<words.size();i++){       
            string s = words[i];
            string temp ="";
            for(auto a:s){
                if(a==separator && temp!=""){
                    ans.push_back(temp);
                    temp="";
                }
                if(a!=separator) temp+=a;
            } 
            if(temp!="")ans.push_back(temp);
        }
        return ans;
    }
};
   

