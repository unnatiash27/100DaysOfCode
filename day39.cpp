//You have a browser of one tab where you start on the homepage and you can visit another url, get back in the history number of steps or move forward in the history number of steps.

class BrowserHistory {
public: 

string stack[5005];
int p,t;
    BrowserHistory(string homepage) {
        stack[p=t=0]=homepage;
    }
    
    void visit(string url) {
        stack[t=++p]=url;        
    }
    
    string back(int steps) {
        return stack[p=max(0,p-steps)];
    }
    
    string forward(int steps) {
        return stack[p=min(t,p+steps)];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */




//In a linked list of size n, where n is even, the ith node (0-indexed) of the linked list is known as the twin of the (n-1-i)th node, if 0 <= i <= (n / 2) - 1.

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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int maxval=0;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *curr,*prev=NULL;
        while(slow)
        {
            curr=slow->next;
            slow->next=prev;
            prev=slow;
            slow=curr;
        }
        while(prev)
        {
            maxval=max(maxval,head->val+prev->val);
            head=head->next;
            prev=prev->next;
        }
        return maxval;
    }
};



//Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).


class Solution {
public:
    int maximum69Number (int num) {
        int n = num, i = 0, j = -1;
        
        while (n) {
            if (n%10 == 6) {
                j = i;
            }
            i++;
            n/=10;
        }
        
        if (j == -1)
            return num;
        
        return num + pow(10, j)*3;
    }
};
