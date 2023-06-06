//Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t;
        while(headA != NULL)
        {
            t=headB;
            while(t!=NULL)
            {
                if(t==headA)return t;
                t=t->next;
            }
            headA=headA->next;

        }
        return NULL;
    }
};

//Given head, the head of a linked list, determine if the linked list has a cycle in it.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head,*fast=head;
        while(fast && slow && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast)
            return true;
        }

        return false;
        
    }
};







//You are given the head of a linked list, and an integer k.
//Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).


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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p=head,*q=head,*curr=head;
        int n=1;
        while(curr!=NULL)
        {
            if(n<k)p=p->next;
            if(n>k)q=q->next;
            curr=curr->next;
            n++;
        }
        swap(p->val,q->val);
        return head;
    }
};















