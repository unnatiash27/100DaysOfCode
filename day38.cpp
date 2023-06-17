//Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.


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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k, nullptr);
        int tlen = 0;
        ListNode* l = head;
        while (l != NULL) {
            tlen++;
            l = l->next;
        }
        int len = tlen / k;
        int dlen = tlen % k;
        ListNode* curr = head;
        ListNode* p = NULL;
        int i = 0;
        while (curr != NULL && i < k) {
            ans[i] = curr;
            for (int j = 0; j < len + (dlen > 0 ? 1 : 0); j++) {
                p = curr;
                curr = curr->next;
            }
            p->next = NULL;
            i++;
            dlen--;
        }
        return ans;
    }
};




//Given the head of a linked list, we repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences.



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
    ListNode* removeZeroSumSublists(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    int prefix = 0;
    unordered_map<int, ListNode*> seen;
    for (ListNode* i = dummy; i; i = i->next) {
        seen[prefix += i->val] = i;
    }
    prefix = 0;
    for (ListNode* i = dummy; i; i = i->next) {
        i->next = seen[prefix += i->val]->next;
    }
    return dummy->next;
}
};
