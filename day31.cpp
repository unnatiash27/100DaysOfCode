//Given the head of a linked list, remove the nth node from the end of the list and return its head.

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (n--) 
        { 
            fast = fast->next; 
            }
        if (fast == nullptr) return head->next;
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        
        return head;
    }
};
