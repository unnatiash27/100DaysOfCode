//Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode *p,*q,*even;
        p=head;
        q=head->next;
        even=head->next;
        while(p->next && q->next)
        {
            p->next=q->next;
            p=q->next;
            q->next=p->next;
            q=p->next;
        }
        p->next=even;
        return head;
    }
};



//You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.

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
    ListNode* mergeNodes(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *slow=head,*fast=head;
        do{
            fast=fast->next;
        }while(fast->val!=0);
        int sum=0;
        while(slow!=fast)
        {
            sum+=slow->val;
            slow=slow->next;
        }
        ListNode *newll = new ListNode(sum);
        newll->next = mergeNodes(fast->next);
        return newll;
    }
};
