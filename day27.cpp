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




//Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

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
    ListNode* swapPairs(ListNode* head)  {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* current = dummy;
    while (current->next != NULL && current->next->next != NULL) {
        ListNode* first = current->next;
        ListNode* second = current->next->next;
        first->next = second->next;
        second->next = first;
        current->next = second;
        current = current->next->next;
    }
    return dummy->next;
}
};




// You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

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
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head->next == NULL)
            return NULL;
        ListNode *p = head;
        int c = 0;
        while (p != NULL)
        {
            c++;
            p = p->next;
        }
        p = head;
        for (int i = 1; i < c / 2; i++)
            p = p->next;
        p->next = p->next->next;
        return head;
    }
};



// You are given the head of a linked list containing unique integer values and an integer array nums that is a subset of the linked list values.

class Solution
{
public:
    int numComponents(ListNode *head, vector<int> &nums)
    {
        if (!head)
            return 0;
        if (!head->next)
            return 1;

        int count = 0;
        bool consecutive = false;
        while (head)
        {
            if (find(nums.begin(), nums.end(), head->val) != nums.end())
            {
                if (!consecutive)
                    count++;
                consecutive = true;
            }
            else
            {
                consecutive = false;
            }

            head = head->next;
        }

        return count;
    }
};







