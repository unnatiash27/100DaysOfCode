/*Given a 0-indexed string s, permute s to get a new string t such that:
All consonants remain in their original places. More formally, if there is an index i with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].
The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].
Return the resulting string.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase. Consonants comprise all letters that are not vowels.
*/
  
class Solution {
public:
    string sortVowels(string s) {
        vector<int>pos;
        vector<char>vol;
        string ans=s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
           { pos.push_back(i);
            vol.push_back(s[i]);}
        }
        sort(vol.begin(),vol.end());
        for(int i=0;i<pos.size();i++)
        {
          
            ans[pos[i]]=vol[i];
        }
        return ans;
    }
};
