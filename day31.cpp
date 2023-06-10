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


//Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num=1,left=0,right=n-1,top=0,bottom=n-1;
        vector<vector<int>>matrix(n,vector<int>(n));

        while(left<=right && top<=bottom){
            for(int i=left; i<=right; i++){
                matrix[top][i]=num++;
            }
            top++;

            for(int i=top;i<=bottom;i++){
                matrix[i][right]=num++;
            }
            right--;

            for(int i=right;i>=left;i--){
                matrix[bottom][i]=num++;
            }
            bottom--;

            for(int i=bottom;i>=top;i--){
                matrix[i][left]=num++;
            }
            left++;
        }

        return matrix;
    }
};

//Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

 
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL) {
            return NULL;
        }

        if(left == right) {
            return head;
        }

        ListNode *current = head, *prev = NULL;

        while(left > 1) {
            prev = current;
            current = current->next;
            left--;
            right--;
        }

        ListNode *tailPrev = prev, *tail = current, *iterator = NULL;

        while(right > 0) {
            iterator = current->next;
            current->next = prev;
            prev = current;
            current = iterator;
            right--;
        }

        if(tailPrev != NULL) {
            tailPrev->next = prev;
        } else {
            head = prev;
        }

        tail->next = current;

        return head;
    }
};
