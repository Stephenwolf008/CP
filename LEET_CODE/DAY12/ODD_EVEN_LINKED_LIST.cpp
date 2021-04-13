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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp=head;
        ListNode* ans=head;
        vector<int> v,o,e;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        for(int i=1;i<=v.size();i++){
            if(i%2!=0)
                o.push_back(v[i-1]);
            else e.push_back(v[i-1]);
        }
        v.clear();
        
        for(int i=0;i<o.size();i++)v.push_back(o[i]);
        for(int i=0;i<e.size();i++)v.push_back(e[i]);
        
        for(int i=0;i<v.size();i++){
            temp->val=v[i];
            temp=temp->next;
        }
        return ans;
        
    }
};
