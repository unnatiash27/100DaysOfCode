// Given a 0-indexed string word and a character ch, reverse the segment of word that starts at index 0 and ends at the index of the first occurrence of ch (inclusive). If the character ch does not exist in word, do nothing.
    
class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        for(int j=0;j< word.size();j++)
        {
            if(word[j]==ch)
            {
                reverse(word.begin(),word.begin()+j+1);
                break;
            }
            
        }
        return word;
    }
};



//Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
     int i=0;
     string ans,ch;
     int n=words.size();
     for(int i=0;i<n;i++)
     {
         ch = words[i];
         ans=ch;
         reverse(ans.begin(),ans.end());
         if(ans==ch)
         return ans;
         
     }   
     return "";
    }
};



//You are given a 0-indexed array of strings details. Each element of details provides information about a given passenger compressed into a string of length 15. 
//Return the number of passengers who are strictly more than 60 years old.

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0,age;
        for(auto d: details)
        {
            age=(d[11] - '0') * 10 + (d[12] - '0');
            if(age>60)
            ans++;
        }
        return ans;
    }
};


//You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.
//Return true if a and b are alike. Otherwise, return false.

class Solution {
public:
    bool halvesAreAlike(string s) {
        int len=s.size();
        int half=len/2;
        int c1=0,c2=0;
        for(int i=0;i<half;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            c1=c1+1;
        }
        for(int j=half;j<len;j++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
            c2=c2+1;
        }
        if(c1==c2)
        return true;
        else
        return false;
    }
};


// You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.
// It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int l=int(paths.size());
        string start[l];
        string end[l];

        for(int i=0;i<l;i++)
        {
            start[i]=paths[i][0];
            end[i]=paths[i][1];
        }

        for(int i=0;i<l;i++)
        {
            for(int j=0;j<l;j++)
            {
            if(start[i]==end[j])
            end[j]="";
            }
        }
        for(int i=0;i<l;i++)
        {
            if(end[i]!="")
            return end[i];
        }
        return "";
    }
};


//Given an integer n, return a string with n characters such that each character in such string occurs an odd number of times.
//The returned string must contain only lowercase English letters. If there are multiples valid strings, return any of them. 

class Solution {
public:
    string generateTheString(int n) {
        string ans;
        if(n%2==0)
        {
            ans+='a';
            n=n-1;
        }
        for(int i=0;i<n;i++)
        {
            ans+='b';
        }
        return ans;
    }
};


//Given an array of strings words where each word can be written as a concatenation of the Morse code of each letter.
//Return the number of different transformations among all words we have.

class Solution {
    
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++){
            string s="";
            for(int j=0;j<words[i].size();j++){
                s+=arr[words[i][j]-'a'];
            }
            m[s]++;
        }
        return m.size();
    }
};


//Return the number of rods that have all three colors of rings on them.

class Solution {
public:
    int countPoints(string rings) {
        int rc[10] = {0};
    int gc[10] = {0};
    int bc[10] = {0};
        for(int i=0;i<rings.size();i+=2)
        {
            char ch=rings[i];
            int no=rings[i+1]-'0';

            if(ch=='R')
            rc[no]++;
            else if(ch=='G')
            gc[no]++;
            else if(ch=='B')
            bc[no]++;
        }
        int count=0;
        for(int j=0;j<10;j++)
            if(rc[j]>0 && bc[j]>0 && gc[j]>0)
        count++;
        return count;
    }
};



//You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.
//Return names sorted in descending order by the people's heights.

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<names.size();i++)
        {
            for(int j=i+1;j<names.size();j++)
            {
                if(heights[i]<heights[j])
                {
                    swap(names[i],names[j]);
                    swap(heights[i],heights[j]);
                }
            }
        }
        return names;
    }
};

