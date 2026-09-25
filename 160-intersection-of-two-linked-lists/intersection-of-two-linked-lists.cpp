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
        ListNode *p=headA;
        ListNode *q=headB;
        while(p!=NULL){
            ListNode* temp=q;
            while(temp!=NULL){
                if(p==temp) return temp;
                temp=temp->next;

            }
            p=p->next;
        }
        return NULL;
    }
};