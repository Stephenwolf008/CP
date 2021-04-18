class Solution {
public:
    void reorderList(ListNode* head) 
    {
	    if(head->next!=NULL) // if case [1] then we need not do anything
        {     
        ListNode *slow=head;
        ListNode *fast=head->next;
        
        //breaking at mid
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *curr=slow->next;//head of the broken list i.e. 2nd part of the original list
        slow->next=NULL;
        
        //reversal of the second part of the original list
        ListNode *prev=NULL;
        ListNode *nextt=curr->next;
        while(curr!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=nextt;
            if(nextt==NULL)
                continue;
            nextt=nextt->next;
        }
        
        //linking first half and reversed list
        ListNode *temp1=head->next;
        ListNode *temp2=prev->next;
        while(head->next!=NULL && prev->next!=NULL)
        {
            head->next=prev;
            head=temp1;
            temp1=temp1->next;
            
            prev->next=head;
            prev=temp2;
            temp2=temp2->next;
        }
        if(head->next==NULL)
        {
            head->next=prev;
        }
        else
        {
            head->next=prev;
            prev->next=temp1;
        }
        
        }
        
    }
};
