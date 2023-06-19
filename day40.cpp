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


//You are given the head of a singly linked-list. The list can be represented as:
//L0 → L1 → … → Ln - 1 → Ln
//Reorder the list to be on the following form:
//L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …



class Solution {
public:
    void reorderList(ListNode* head) {
        // base case : linkedlist is empty
        if (!head) return;
        
        // finding the middle with the help of two pointer approach
        ListNode *tmp = head, *half = head, *prev = NULL;
        while (tmp->next && tmp->next->next) {
            tmp = tmp->next->next;
            half = half->next;
        }
        
        // adding one bit in case of lists with even length
        if (tmp->next) half = half->next;
        
        // Now reverse the second half
        while (half) {
            tmp = half->next;
            half->next = prev;
            prev = half;
            half = tmp;
        }
        half = prev;
        
        // After reversing the second half, let's merge both the halfes
        while (head && half) {
            tmp = head->next;
            prev = half->next;
            head->next = half;
            half->next = tmp;
            head = tmp;
            half = prev;
        }
        
        // Base case : closing when we had even length arrays
        if (head && head->next) head->next->next = NULL;
    }
};
