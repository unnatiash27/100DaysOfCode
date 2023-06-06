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
