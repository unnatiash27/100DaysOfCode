//Given a singly linked list, return a random node's value from the linked list. Each node must have the same probability of being chosen.

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
ListNode *HeadNode;
    Solution(ListNode* head) {
        HeadNode=head;
    }
    
    int getRandom() {
        int res,len=1;
        ListNode *x=HeadNode;
        while(x)
        {
            if(rand() % len==0)
            res=x->val;
            len++;
            x=x->next;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */

//You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

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
    ListNode* reverseListNode(ListNode* head)
    {
        ListNode* last = NULL;
        while(head)
        {
            ListNode* tmp = head->next;
            head->next = last;
            last = head;
            head = tmp;
        }
        return last;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseListNode(l1);
        l2 = reverseListNode(l2);
        ListNode* head = NULL;
        int carry = 0;
        while(l1||l2)
        {
            int x1 = l1?l1->val:0;
            int x2 = l2?l2->val:0;
            int sum = (x1+x2+carry)%10;
            carry = (x1+x2+carry)/10;
            ListNode* curr = new ListNode(sum);
            curr->next = head;
            head = curr;
            l1 = l1?l1->next:NULL;
            l2 = l2?l2->next:NULL;
        }
        if(carry)
        {
            ListNode* curr = new ListNode(carry);
            curr->next = head;
            head = curr;
        }
        return head;
    }
};



// Reverse the nodes in each group with an even length, and return the head of the modified linked list.

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
    void swap(ListNode *A, ListNode *B)
    {
        int tmp = A->val;
        A->val = B->val;
        B->val = tmp;
    }

    void reversed(vector<ListNode *> arr)
    {
        int i = 0, j = arr.size() - 1;
        while (i <= j)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    ListNode *reverseEvenLengthGroups(ListNode *head)
    {
        vector<ListNode *> ans;
        int i = 1, c = 0;
        ListNode *p = head;
        while (p != NULL)
        {
            ans.push_back(p);
            p = p->next;
            c++;

            if (c == i)
            {
                if (c % 2 == 0)
                {
                    reversed(ans);
                }
                ans.clear();
                c = 0;
                i++;
            }
        }
        if (c % 2 == 0)
            reversed(ans);
        return head;
    }
};








