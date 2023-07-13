//A pangram is a sentence where every letter of the English alphabet appears at least once.
//Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        vector<int>c(26,0);
 
        for(int i=0;i<n;i++)
        {
            int index=(sentence[i]-'a');
            c[index]++;
        }

        for(int i=0;i<26;i++)
        {
            if(c[i] == 0)
            return false;
        }

        return true;
    }
};

//Given an array of strings patterns and a string word, return the number of strings in patterns that exist as a substring in word.

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++)
        {
            if(word.find(patterns[i])==-1)
            continue;

            else
            count++;
        }

        return count;
    }
};

//You are given a string s formed by digits and '#'. We want to map s to English lowercase characters as follows:
//Characters ('a' to 'i') are represented by ('1' to '9') respectively.
//Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.
//Return the string formed after mapping.


class Solution {
public:
    string freqAlphabets(string s) {
        int n=s.length(),i=0;
        string ans="";
        while(i<n)
        {
            if(i+2<n && s[i+2]=='#')
            {
                int ss = (s[i]-'0')*10 + (s[i+1]-'0');
                ans += char(ss+'a'-1);
                i += 3;
            }
            else
            {
                ans += char(s[i]-'0'-1+'a');
                i++;
            }
        }

        return ans;
    }
};


// Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
// Return the decimal value of the number in the linked list.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        int t = 0;
        while (head != 0)
        {
            t = t * 2 + head->val;
            head = head->next;
        }

        return t;
    }
};


// Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *a;
        ListNode *b;

        while (b && b->next)
        {
            a = a->next;
            b = b->next->next;
        }

        return a;
    }
};


// There is a singly-linked list head and we want to delete a node node in it.

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
