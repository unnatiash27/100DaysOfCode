//You are given the head of a linked list.
//Remove every node which has a node with a strictly greater value anywhere to the right side of it.
//Return the head of the modified linked list.

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
    ListNode* removeNodes(ListNode* head) {
        ListNode *curr=head,*prev=NULL;
        while(curr)
        {
            ListNode *forw = curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
       ListNode *max=prev,*t=prev->next;
       while(t)
       {
           if(max->val > t->val)
           max->next=t->next;
           else
           max=t;
           t=t->next;
       }
       ListNode* cc=prev;
       ListNode* pp=NULL;
       ListNode* nn=NULL;
        while(cc)
        {
            nn=cc->next;
            cc->next=pp;
            pp=cc;
            cc=nn;
        }
        return pp;
    }
};




// Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].


class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *prev=head;
        head=head->next;
        int i=1;
        vector<int> index;
        while(head->next){
            if((prev->val < head->val and head->val > head->next->val) ||( prev->val > head->val and head->val < head->next->val)){
                index.push_back(i);
            }
            prev=head;
            head=head->next;
            i++;
        }
        if(index.size() < 2) return {-1,-1};
        
        int mindist=INT_MAX;
        for(int i=0;i<index.size()-1;i++){
            mindist=min(index[i+1]-index[i],mindist);
        }
        return {mindist,index.back()-index[0]};
    }
};








