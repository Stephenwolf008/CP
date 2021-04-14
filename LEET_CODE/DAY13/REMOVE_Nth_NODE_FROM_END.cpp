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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        int d=size-n+1;
        temp=head;
        if(size==1)
            return (n==1)?NULL:head;
        if(d-1==0){
            return head->next;
        }
        while(temp!=NULL){
            d--;
            if(d==1){
                temp->next=temp->next->next;
                break;
            }
            else temp=temp->next;
        }
        return head;
    }
};
