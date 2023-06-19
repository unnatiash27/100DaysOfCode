//A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.


class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>sc;
        string ans;
        for( char i:s)
        {
            if(i=='(')
            {
                if(sc.size()>0)
                {
                    ans+=i;
                }
                sc.push(i);
            }
            else
            {
                if(sc.size()>1)
                {
                    ans+=i;
                }
                sc.pop();
            }

        }
        return ans;
    }
};



//Merge all the linked-lists into one sorted linked-list and return it.



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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i])
            {
                v.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
            sort(rbegin(v),rend(v));
            ListNode* ans=nullptr;
            for(int i=0;i<v.size();i++)
            {
                ans=new ListNode(v[i],ans);
            }
        
        return ans;
    }
};
