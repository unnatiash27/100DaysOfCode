//Given the head of a linked list, rotate the list to the right by k places.

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
    ListNode* rotateRight(ListNode* head, int k) {
     ListNode *t=head,*p=head;
     if(head == NULL || head->next == NULL ||k==0)
     return head;
     int c=1;
     while(t->next!=NULL)
     {
         t=t->next;
         c++;
     }   
     k=k%c;
     while(k--)
     {
         while(t->next != NULL)
         t=t->next;
         t->next=head;
         head=t;
         p=t;
         while(t->next!=head)
         {t=t->next;}
         t->next=NULL;
         t=p;
     }
     return head;
    }
};
