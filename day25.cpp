// You are given two linked lists: list1 and list2 of sizes n and m respectively.
// Remove list1's nodes from the ath node to the bth node, and put list2 in their place.

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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *p1 = list1;
        ListNode *p2 = list1;
        for (int i = 0; i < a - 1; i++)
        {
            p1 = p1->next;
        }
        for (int i = 0; i < b; i++)
        {
            p2 = p2->next;
        }
        p1->next = list2;
        ListNode *temp = list2;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p2->next;
        return list1;
    }
};





// The value of an alphanumeric string can be defined as:
// The numeric representation of the string in base 10, if it comprises of digits only.
// The length of the string, otherwise.
// Given an array strs of alphanumeric strings, return the maximum value of any string in strs.

class Solution
{
public:
    bool isNumber(string s)
    {
        for (int i = 0; i < s.length(); i++)
            if (isdigit(s[i]) == false)
                return false;
        return true;
    }
    int maximumValue(vector<string> &strs)
    {
        vector<int> ans;
        int n = 0;
        for (int i = 0; i < strs.size(); i++)
        {
            n = strs[i].size();
            if (isNumber(strs[i]))
            {
                n = stoi(strs[i]);
            }
            ans.push_back(n);
        }
        int max = INT_MIN;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] > max)
                max = ans[i];
        }
        return max;
    }
};






