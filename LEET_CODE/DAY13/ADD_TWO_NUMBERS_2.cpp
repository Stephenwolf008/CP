class Solution {
 public:
     // function to reverse a list
    ListNode* reverseList(ListNode* l){
        ListNode* prev=NULL;
        
        while(l){
            ListNode* temp = l->next;
            l->next=prev;
            prev = l;
            l=temp;
        }
        return prev;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            // reverse list 1 and 2
            ListNode* rev1=reverseList(l1);            
            ListNode* rev2=reverseList(l2);

            ListNode* dummy = new ListNode(0);
 		    ListNode* ans = dummy;
        
            int carry =0,sum;
            
            // add list1 with list 2 till either of them are null
            while(rev1&&rev2){
                sum = rev1->val+rev2->val+carry;
                carry=sum/10;
                dummy->next = new ListNode(sum%10);
                dummy=dummy->next;
                rev1=rev1->next;
                rev2=rev2->next;
            }
        
            //add list1 with carry till list1 is NULL 
            while(rev1){
                if(carry!=0){
                    sum = carry+rev1->val;
                    carry=sum/10;
                }
                else{
                    sum=rev1->val;
                }
                dummy->next = new ListNode(sum%10);
                dummy=dummy->next;
                rev1 = rev1->next;
            }
        
            //add list2 with carry till list2 is empty
            while(rev2){
                 if(carry!=0){
                    sum = carry+rev2->val;
                    carry=sum/10;
                }
                else{
                    sum=rev2->val;
                }
                dummy->next = new ListNode(sum%10);
                dummy=dummy->next;
                rev2 = rev2->next;
            }
        
            // If any carry is left from the above operation add it to list.
            if(carry!=0){
                dummy->next = new ListNode(carry);            
            }
        
        //reversse the list and return
        return reverseList(ans->next);
    }
 };
 
