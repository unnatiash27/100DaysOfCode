//Given a string s consisting of only the characters 'a' and 'b', return true if every 'a' appears before every 'b' in the string. Otherwise, return false.
 
class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b' && s[i+1]=='a'){
            return false;}
        }
        return true;
    }
};


//A sentence is a list of tokens separated by a single space with no leading or trailing spaces. Every token is either a positive number consisting of digits 0-9 with no leading zeros, or a word consisting of lowercase English letters.


class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>v;

        for(int i=0;i<s.size();)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                int num=0;
                while(s[i]>='0'&&s[i]<='9')
                {
                    num=num*10+(s[i]-'0');
                    i++;
                }
                v.push_back(num);
            }
            else
            {
                i++;
            }
        }
        bool flag=true;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>=v[i+1])
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};

