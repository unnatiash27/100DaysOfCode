//You are given the strings key and message, which represent a cipher key and a secret message, respectively. The steps to decode message are as follows:
//Use the first appearance of all 26 lowercase English letters in key as the order of the substitution table.
//Align the substitution table with the regular English alphabet.
//Each letter in message is then substituted using the table.
//Spaces ' ' are transformed to themselves.

  
class Solution {
public:
    string decodeMessage(string key, string message) {
        int i=0,j=0,k=0;
        string ans="";
        string hash="";

        for(i=0;i<key.size();i++)
        {
            if(key[i]==' ')
            continue;
            else if(count(hash.begin(),hash.end(),key[i])==0)
            hash+=key[i];
        }
        for(i=0;i<message.size();i++)
        {
            k=0;
            if(message[i]==' ')
            ans+=' ';
            else
            {
                for(j=0;j<hash.size();j++)
                {
                    if(message[i]==hash[j])
                    ans+=char(97+j);
                }
            }
        }
        return ans;
    }
};

//Given a balanced string s, split it into some number of substrings such that:
//Each substring is balanced.
//Return the maximum number of balanced strings you can obtain.

class Solution {
public:
    int balancedStringSplit(string s) {
        int lc=0,rc=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            lc++;
            else if(s[i]=='R')
            rc++;

            if(lc==rc)
            ans++;
        }
        return ans;
    }
};

//Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<=s.size();j++)
        {
            if(s[j]==' ' || j==s.size())
            {
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
        }
        return s;
    }
};

